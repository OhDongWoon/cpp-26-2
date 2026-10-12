#include <iostream>
#include <string>
using namespace std;

string toLowerStr(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    return str;
}

string toUpperStr(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    return str;
}

int calcHammingDist(string s1, string s2) {
    s1 = toLowerStr(s1);
    s2 = toLowerStr(s2);

    int count = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    string s1, s2;

    while (true) {
        cout << "DNA1: ";
        cin >> s1;
        cout << "DNA2: ";
        cin >> s2;

        if (s1.length() == s2.length()) {
            break;
        }

        cout << "오류: 길이가 다름" << endl;
    }

    int count = calcHammingDist(s1, s2);
    cout << "해밍 거리는 " << count << endl;

    return 0;
}