#include <iostream>
#include <string>
using namespace std;

int main(){
    const int maxPeople = 3;
    string names[maxPeople];
    int ages[maxPeople];
    
    for (int i = 0 ; i < maxPeople; i++){
        cin >> names[i];
        cout << "사람 " << i+1 << "의 이름 :" << names[i] << endl;
        for (int j = 0 ; j < 1; j++){
            cin >> ages[i];
            cout << "사람 " << i+1 << "의 나이 :" << ages[i] << endl;
        }
    }
    int ageThreshold;
    cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요: ";
    cin >> ageThreshold;

    cout << ageThreshold << "세 이상인 고객님들:\n";

    int count = 0 ; 
    for (int i = 0 ; i < maxPeople; i++){
        if (ages[i] >= ageThreshold){
            cout << names[i] << "(" << ages[i] << "세)" << endl;
            count = count + 1;
        }
        
    }
    if (count == 0){
        cout << ageThreshold << "이상의 나이를 가진 고객이 없습니다.";
    }

    return 0;
}