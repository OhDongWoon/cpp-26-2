#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "숫자를 입력하시오";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "1. 파일 저장을 선택하였습니다." << endl;
            break;
        case 2:
            cout << "2. 파일 닫기를 선택했습니다." << endl;
            break;
        case 3:
            cout << "3. 프로그램을 종료합니다." << endl;
            break;
        default:
            cout << "잘못된 선택입니다." << endl;
            break;
    }

    return 0;
}