#include<iostream>
using namespace std;

bool checkNumber(int *arr, int n, int x){
    if(n == 0){
        return false;
    }

    // Now, we step up the first step after remaining part is done by recursion
    if(arr[0] == x){
        return true;
    }
    bool check = checkNumber(arr + 1, n - 1, x);
    if(!check){
        return false;
    }else{
        return true;
    }
}

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int x;
    cin >>x;

    bool ans = checkNumber(arr,n,x);
    cout << ans << endl;
    delete [] arr;
}