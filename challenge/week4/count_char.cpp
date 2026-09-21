#include <iostream>
using namespace std;

int main(){
    int vowel = 0;
    int consonant = 0;

    cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;

    char ch; // 사용자 입력 저장하기 위한 변수

    while(cin >> ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel = vowel + 1;
           } 
           else {
            consonant = consonant + 1;
           }
        if(ch == '^Z') {
            break;
        }
    } 
    cout << "모음: " << vowel << endl;
    cout << "자음: " << consonant << endl;
    return 0;
}