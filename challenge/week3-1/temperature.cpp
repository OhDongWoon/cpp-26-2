#include <iostream>

using namespace std;

int main(){
    double Fahrenheit;
    double Celsius;

    cout << "화씨 온도를 입력하세요: ";
    cin >> Fahrenheit ;
    cout << "화씨 온도: " << Fahrenheit << endl;

    Celsius = (5.0/9.0)*(Fahrenheit-32);
    cout << "섭씨 온도: " << Celsius;

    return 0;
}