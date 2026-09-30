// 참조자 매개변수 없이(a와 b 값이 바뀌도록)

#include <iostream>
using namespace std;

int a = 100 , b = 200;

void swap(){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    
    cout << "a = " << a << " b = " << b << endl;

    // 두 변수 내 값 변경
    swap(a, b);

    cout << "a = " << a << " b = " << b << endl;
    return 0;

}