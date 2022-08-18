#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    // 🚩 when our array have 0 element then the sum of array element is 0 obviusly
    if(n == 0)
      return 0;
    // 🚩Here, we can divided the array into two parts because when our array size is 1 it means the sum of array is only single elements itself
    int smallCalc = getSum(arr + 1, n - 1);
    // we left the array first element that's why we would be added in this 
    return arr[0] + smallCalc;

}

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr,n);
    cout << ans << endl;
    delete [] arr;
}