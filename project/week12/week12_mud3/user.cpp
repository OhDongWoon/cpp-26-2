#include <iostream>
#include <string>
#include "user.h"
using namespace std;
User::User(){
    hp = 20 ;
}

void User::IncreaseHP(int inc_hp){
    hp = hp + inc_hp;
}

void User::DecreaseHP(int dec_hp){
    hp = hp - dec_hp;
}

int User::GetHP(){
    return hp;
    itemCnt = 0 ; 
}

// 아이템 증가 함수
void User::IncreaseItem(){
    itemCnt = itemCnt + 1;
}

// 연산자 중복 정의
ostream& operator<<(ostream& os, const User& user) {
    os << "현재 HP는 " << user.hp << " 이고, 먹은 아이템은 총 " << user.itemCnt << "개 입니다";
    return os;
}

// 공격 함수
void User::doAttack(){
    cout << "공격합니다" ;
}