#include <iostream>
using namespace std;

class Time{
public:
    int hour; // 시를 나타낸다. 0~23가 가능하다.
    int minute; // 분을 나타낸다. 0~59가 가능하다.
    //Time(){}    // 오버로딩 => 기본 생성자 설정을 해줘야한다. / 생성자 중복 정의
    Time(int h = 0 , int m = 0 ){ // 디폴트 매개변수 + 생성자
        hour = h;
        minute = m;
    }

    void Print(){
        cout << hour << ":" << minute << endl;
    }
};

int main(){
    Time a ;        // 오버로딩으로 해결
    Time b (10, 30); //OK 하지만 예전의 방법이다.
    Time c {10, 40}; // OK 최신의 방법이다.
    Time d = {10, 50}; // OK 하지만 간결하지 않다.

    a.Print();
    b.Print();
    c.Print();
    d.Print();
    return 0 ; 
}