#include <iostream>
using namespace std;

// 유저의 수와 ITEM의 수 상수로 고정
const int NUM_USERS = 3;
const int NUM_ITEMS = 3;

// userPreferences 배열 만들기
int userPreferences[NUM_USERS][NUM_ITEMS];


// 사용자와 항목 간의 선호도를 입력 받아 2차원 배열 초기화 함수
void initializePreferences(int preferences[NUM_USERS][NUM_ITEMS]){
    for (int i = 0 ; i < NUM_USERS; ++i){
    cout << "사용자" << (i + 1) << "의 선호도를 입력하세요 (";
    cout << NUM_ITEMS << "개의 항목에 대해): ";
    for (int j = 0 ; j < NUM_ITEMS; ++j){
        cin >> preferences[i][j];
        }
    }
}


// 각 사용자에 대한 추천 항목 찾기 함수
void findRecommendedItems(const int preferences[NUM_USERS][NUM_ITEMS]){
    for (int i = 0 ; i < NUM_USERS; ++i){
    int maxPreferenceIndex = 0 ;
        for (int j = 1 ; j < NUM_ITEMS; ++j){
            if (preferences[i][j] > preferences[i][maxPreferenceIndex]){
                maxPreferenceIndex = j ;
            }
        }
        
        // 사용자에게 추천하는 항목 출력
        cout << "사용자 " << (i + 1) << "에게 추천하는 항목: ";
        cout << (maxPreferenceIndex + 1) << std::endl;
    }
}

int main() {
    // 선호도 입력 함수 호출
    initializePreferences(userPreferences);

    // 각 사용자에 대한 추천 항목 출력하는 함수 호출
    findRecommendedItems(userPreferences);

    return 0;
}