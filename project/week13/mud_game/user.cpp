#include <iostream>
#include <string>
#include "user.h"
using namespace std;

Magician::Magician()
{
    hp = 20;
    itemCnt = 0;
}

void Magician::IncreaseHP(int inc_hp)
{
    hp = hp + inc_hp;
}

void Magician::DecreaseHP(int dec_hp)
{
    hp = hp - dec_hp;
}

int Magician::GetHP()
{
    return hp;
}

void Magician::IncreaseItem()
{
    itemCnt = itemCnt + 1;
}

int Magician::GetItemCount()
{
    return itemCnt;
}

void Magician::doAttack()
{
    cout << "마법 사용" << endl;
}

Warrior::Warrior()
{
    hp = 20;
    itemCnt = 0;
}

void Warrior::IncreaseHP(int inc_hp)
{
    hp = hp + inc_hp;
}

void Warrior::DecreaseHP(int dec_hp)
{
    hp = hp - dec_hp;
}

int Warrior::GetHP()
{
    return hp;
}

void Warrior::IncreaseItem()
{
    itemCnt = itemCnt + 1;
}

int Warrior::GetItemCount()
{
    return itemCnt;
}

void Warrior::doAttack()
{
    cout << "베기 사용" << endl;
}

ostream &operator<<(ostream &os, User &user)
{
    os << "현재 HP는 " << user.GetHP()
       << " 이고, 먹은 아이템은 총 "
       << user.GetItemCount() << "개 입니다";
    return os;
}