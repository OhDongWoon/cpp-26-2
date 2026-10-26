#include "car.h"
using namespace std;

int main(){
    Car myCar;

    myCar.setSpeed(80);
    cout << "현재 속도는 " ; 
        cout << myCar.getSpeed();

    return 0 ; 
}

// 헤더파일 실행 방법
// g++ car.cpp main.cpp -o car.exe  -> 헤더파일 만들기
// car.exe -> 실행됨