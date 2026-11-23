#include <iostream>
#include <string>
using namespace std;

namespace mud1
{
    class User
    {
    private:
        int hp;

    public:
        User();
        void IncreaseHP(int inc_hp);
        void DecreaseHP(int dec_hp);
        int GetHP();
    };
}