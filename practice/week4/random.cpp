#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int list[10];
    int max;

    for(int i = 0 ; i < 10 ; i++){
        int elem = rand() % 100 + 1;
        list[i] = elem;
        cout << elem << " ";
    }
    cout << endl;
    max = list[0];
    for (auto elem : list){ // auto : 자동으로 자료형을 추론하여 elem의 자료형을 결정
        if (elem > max)
            max = elem;
    }
    cout << "최대값=" << max << endl;
    return 0;
}