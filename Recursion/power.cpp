#include<iostream>
using namespace std;

int power(int x, int n){
    // 🚩 base case is when power is 0 then it considerd as 1 or  return 1
    if(n == 0){
        return 1;
    }
    // hypothesis and bigger problem is based on the smaller problem
    int smallCalc = power(x, n - 1);
    // after calculating all of these situation then we returne all calc part
    return x * smallCalc;
}

int main(){
    int x,n;
    cin >>x >> n;

    int output = power(x,n);
    cout << output << endl;
}