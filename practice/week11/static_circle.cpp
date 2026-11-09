#include <iostream>
#include <string>
using namespace std;
class Circle
{
    int x, y;
    int radius;

public:
    static int count; // 정적 변수
    Circle(int x = 0, int y = 0, int radius = 0)
    {
        this->x = x;
        this->y = y;
        this->radius = radius;
        count++;
    }
    // 정적 멤버 함수
    static int getCount()
    {
        return count;
    }
};
int Circle::count = 0;