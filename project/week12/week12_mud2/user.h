#include <iostream>
#include <string>
using namespace std;
namespace mud2
{
    class User
    {
    private:
        int hp;
        int itemCnt;

    public:
        User();
        void IncreaseHP(int inc_hp);
        void DecreaseHP(int dec_hp);
        int GetHP();
        void IncreaseItem(); // 아이템 증가 함수
        friend ostream &operator<<(ostream &os, const User &user);
    };
}