#include <iostream>
using namespace std;

int main() 
{
    int age; // 나이
<<<<<<< HEAD
    cout << "나이를 입력해주세요.";
=======
    cout << "나이를 입력해";
>>>>>>> dce9cae7fabcf407006f86741c7a1e40978d8822
    cin >> age;

    if (age <= 12)
        cout << "어린이입니다," << endl;
    else if (age <= 19)
        cout << "청소년입니다." << endl;
    else
        cout << "성인입니다." << endl;
    
    return 0;
}
