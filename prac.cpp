#include <iostream>
#include <vector>
using namespace std ; 

double dotProduct(const vector<double>& a, const vector<double>& b){
    double result = 0.0;

    for(int i = 0 ; i < a.size() ; i++){
        result = result + (a[i] * b[i]) ; 
    }

    return result;
}

int main() {
    vector<double> vec1 = {1.0 , 0.5} ; 
    vector<double> vec2 = {0.8, -0.4} ; 
    cout << dotProduct(vec1 , vec2) << endl; 
    cout << vec1.size() ; 
    
}