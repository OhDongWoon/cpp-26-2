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
}