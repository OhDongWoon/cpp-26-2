#include <iostream>
using namespace std;

class Time {
private:
    int hour; // 0 ~ 23
    int minute; // 0 ~ 59

public:
    Time(int h , int m);
    void IncHour();
    void Print();

    int GetHour() { return hour ; }
    int GetMinute() {return minute;}
    void SetHour(int h ) {hour = h;}
    void SetMinute(int m) {minute = m;}
};

Time::Time(int h , int m) { // 외부 작성
    hour = h ; 
    minute = m ;
}

void Time::IncHour() { // 외부 작성
    ++hour;
    if (hour > 23 ){
        hour = 0 ; 
    }
}

void Time::Print() { // 외부작성
    cout << hour << ":" << minute << endl;
}

int main(){
    Time a {0, 0};
    // a.hour = 10 ; // 에러 : hour 변수에 직접 넣는거는 Private이기 때문에 직접 접근을 할 수 없기 때문
    // 방법 1. Private -> Public : 별로 좋지 않은 방법
    // 방법 2. Set / Get 메서드를 이용해서 값을 주입하는 것이 좋다.
    a.SetHour(6) ; 
    a.SetMinute(30);

    a.Print();
    return 0 ; 
}