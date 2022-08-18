#include<iostream>
using namespace std;

void printNumbers(int n){
    // 🚩 this is the base case when n == 0  then it returns nothing 
    if(n == 0){
        return;
    }

    // 🚩 this is the hypothesis condition we can assume that or handle it by assuming 
    printNumbers(n-1);
    // now we can display the numbers
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;

    printNumbers(n);
}