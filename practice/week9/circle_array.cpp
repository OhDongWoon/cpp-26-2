#include <iostream>
using namespace std;

class Circle {
public:
    int x, y ;
    int radius;

    Circle() {
        x = 0 ; 
        y = 0 ; 
        radius = 0 ; 
    }
    Circle(int x, int y, int r) {
        this -> x = x ;  // 같은 변수 이름일 때 , 객체 내 속성과 매개변수를 구분짓기 위해
        this -> y = y ; 
        this -> radius = r ;
    }
    void Print() {
        cout << "반지름: " << radius << " @(" << x << ", " << y << ")" << endl;
    }
};


int main(void) {
    Circle objArray[10] ; 
    // 참조자를 안하면 모두 0인 이유 : 왜냐하면 객체를 복사해서 전달하기 때문에, 원본 객체의 값이 바뀌지 X
    // 참조자를 붙이면 c는 objectArray의 원본 객체를 가리키게 되므로, 원본 객체의 값이 바뀌게 된다
    for (Circle& c: objArray) {
        c.x = rand() % 500 ; 
        c.y = rand() % 300;
        c.radius = rand() % 100 ;
    }
    for (Circle c: objArray) {
        c.Print();
    }
    return 0 ; 
}