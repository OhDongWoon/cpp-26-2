
#include <iostream>
#include <string>
#include "user.h"
#include <vector>
using namespace std;

const int mapX = 5;
const int mapY = 5;

// 사용자 정의 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY);
void displayMap(vector<vector<int>> &map, int user_x, int user_y);
bool checkGoal(vector<vector<int>> &map, int user_x, int user_y);

// 현재 위치이의 아이템, 적, 포션 확인하는 함수
void checkState(vector<vector<int>> &map, int user_x, int user_y, User &user);

// User 객체를 넣으면 hp가 0인지 체크하고, 0이라면 false를 반환, 그렇지 않다면 true를 반환
bool CheckUser(User &user);

// 메인 함수
int main()
{
    // 0은 빈 공간, 1은 아이템, 2는 적, 3은 포션, 4는 목적지
    vector<vector<int>> map = {
        {0, 1, 2, 0, 4},
        {1, 0, 0, 2, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 3, 0, 0},
        {3, 0, 0, 0, 2}};

    int choice;
    cout << "직업 선택 (1. 마법사, 2. 전사): ";

    if (!(cin >> choice))
    {
        cout << "숫자를 입력하세요." << endl;
        return 0;
    }

    User *user = nullptr;

    if (choice == 1)
    {
        user = new Magician();
    }
    else if (choice == 2)
    {
        user = new Warrior();
    }
    else
    {
        cout << "잘못된 선택입니다." << endl;
        return 0;
    }

    int user_x = 0;
    int user_y = 0;

    while (1)
    { // 사용자에게 계속 입력받기 위해 무한 루프
      // 번갈아 가기
        cout << "현재 HP: " << user->GetHP() << endl;
        user->doAttack();

        // 사용자의 입력을 저장할 변수
        string user_input = "";
        cout << "명령어를 입력하세요 (상,하,좌,우,지도,정보,종료): ";
        cin >> user_input;

        if (user_input == "상")
        {
            // 위로 한 칸 올라가기
            user_y -= 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY);
            if (inMap == false)
            {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_y += 1;
            }
            else
            {
                cout << "위로 한 칸 올라갑니다." << endl;
                displayMap(map, user_x, user_y);

                user->DecreaseHP(1);

                if (CheckUser(*user))
                {
                    checkState(map, user_x, user_y, *user);
                }
            }
        }
        else if (user_input == "하")
        {
            // TODO: 아래로 한 칸 내려가기
            user_y += 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY);
            if (inMap == false)
            {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_y -= 1;
            }
            else
            {
                cout << "위로 한 칸 내려갑니다." << endl;
                displayMap(map, user_x, user_y);

                user->DecreaseHP(1);

                if (CheckUser(*user))
                {
                    checkState(map, user_x, user_y, *user);
                }
            }
        }
        else if (user_input == "좌")
        {
            // TODO: 왼쪽으로 이동하기
            user_x -= 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY);

            if (inMap == false)
            {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_x += 1;
            }
            else
            {
                cout << "왼쪽으로 이동합니다." << endl;
                displayMap(map, user_x, user_y);

                user->DecreaseHP(1);

                if (CheckUser(*user))
                {
                    checkState(map, user_x, user_y, *user);
                }
            }
        }
        else if (user_input == "우")
        {
            // TODO: 오른쪽으로 이동하기
            user_x += 1;
            bool inMap = checkXY(user_x, mapX, user_y, mapY);
            if (inMap == false)
            {
                cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
                user_x -= 1;
            }
            else
            {
                cout << "오른쪽으로 이동합니다." << endl;
                displayMap(map, user_x, user_y);

                user->DecreaseHP(1);

                if (CheckUser(*user))
                {
                    checkState(map, user_x, user_y, *user);
                }
            }
        }
        else if (user_input == "지도")
        {
            displayMap(map, user_x, user_y);
        }
        else if (user_input == "정보")
        {
            cout << *user << endl;
        }
        else if (user_input == "종료")
        {
            cout << "종료합니다.";
            break;
        }
        else
        {
            cout << "잘못된 입력입니다." << endl;
            continue;
        }

        if (CheckUser(*user) == false)
        {
            cout << "HP가 0이하가 되었습니다. 실패했습니다. " << endl;
            cout << "게임을 종료합니다." << endl;
            break;
        }

        // 목적지에 도달했는지 체크
        bool finish = checkGoal(map, user_x, user_y);
        if (finish == true)
        {
            cout << "목적지에 도착했습니다! 축하합니다!" << endl;
            cout << "게임을 종료합니다." << endl;
            break;
        }
    }
    delete user;
    return 0;
}

// 지도와 사용자 위치 출력하는 함수
void displayMap(vector<vector<int>> &map, int user_x, int user_y)
{
    for (int i = 0; i < mapY; i++)
    {
        for (int j = 0; j < mapX; j++)
        {
            if (i == user_y && j == user_x)
            {
                cout << " USER |"; // 양 옆 1칸 공백
            }
            else
            {
                int posState = map[i][j];
                switch (posState)
                {
                case 0:
                    cout << "      |"; // 6칸 공백
                    break;
                case 1:
                    cout << "아이템|";
                    break;
                case 2:
                    cout << "  적  |"; // 양 옆 2칸 공백
                    break;
                case 3:
                    cout << " 포션 |"; // 양 옆 1칸 공백
                    break;
                case 4:
                    cout << "목적지|";
                    break;
                }
            }
        }
        cout << endl;
        cout << " -------------------------------- " << endl;
    }
}

// 이동하려는 곳이 유효한 좌표인지 체크하는 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY)
{
    bool checkFlag = false;
    if (user_x >= 0 && user_x < mapX && user_y >= 0 && user_y < mapY)
    {
        checkFlag = true;
    }
    return checkFlag;
}

// 유저의 위치가 목적지인지 체크하는 함수
bool checkGoal(vector<vector<int>> &map, int user_x, int user_y)
{
    // 목적지 도착하면
    if (map[user_y][user_x] == 4)
    {
        return true;
    }
    return false;
}

// 현재 위치이의 아이템, 적, 포션 확인하는 함수
void checkState(vector<vector<int>> &map, int user_x, int user_y, User &user)
{
    int place = map[user_y][user_x];
    switch (place)
    {
    case 0:
        break;
    case 1:
        cout << "아이템이 있습니다." << endl;
        user.IncreaseItem();
        map[user_y][user_x] = 0;
        cout << "아이템을 획득했습니다." << endl;
        break;
    case 2:
        cout << "적이 있습니다." << endl;
        user.DecreaseHP(2);

        cout << "HP가 2 감소했습니다." << endl;
        cout << "현재 HP : " << user.GetHP() << endl;
        break;
    case 3:
        cout << "포션이 있습니다." << endl;
        user.IncreaseHP(2);

        cout << "HP가 2 증가하였습니다." << endl;
        cout << "현재 HP : " << user.GetHP() << endl;
        break;
    }
}

// bool CheckUser(User user) 함수 생성: User 객체를 넣으면 hp가 0인지 체크하고, 0이라면 false를 반환, 그렇지 않다면 true를 반환
bool CheckUser(User &user)
{
    if (user.GetHP() <= 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}