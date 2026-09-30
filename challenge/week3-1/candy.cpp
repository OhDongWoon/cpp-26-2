#include <iostream>

using namespace std;

int main(){
    int money ;
    int candy_price;

    cout << "현재 가지고 있는 돈 :";
    cin >> money ;
    cout << money << endl;

    cout << "캔디의 가격 :" << endl;
    cin >> candy_price;

    int max ;
    max = money / candy_price;

    int balance;
    balance = money - max * candy_price;

    cout << "최대로 살 수 있는 캔디 = " << max << endl;
    cout << "캔디 구입 후 남은 돈 = " << balance << endl;

    return 0;
}