#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main() {
    int *ptr;
    srand(time(NULL)); // 난수발생기시드설정
    ptr = new int[10]; // ① 동적메모리할당
    for (int i = 0; i < 10; i++) {
        ptr[i] = rand(); // ② 동적메모리사용
    }
    for (int i = 0; i < 10; i++) {
        cout << ptr[i] << " ";
    }
    delete[] ptr; // ③ 동적메모리반납
    cout << endl;
    
return 0;
}