// 학생들의평균성적을계산하는예제에서학생이몇명인지알수없다고하자. 동적배열인벡터를이용하여 서작성해보자.

#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> scores;
    int score;
    cout << "성적을 입력하시오(종료는 -1) : ";
    while(true) {
        cin >> score;
        cout << score << endl;
        if(score == -1){
            break;
        }
        scores.push_back(score);       
    }
    int sum = 0 ; 
    for (auto i : scores) {
        sum = sum + i ; 
    }
    cout << "성적 평균 = "  << (double)sum / scores.size() << endl ;

    return 0 ; 
}