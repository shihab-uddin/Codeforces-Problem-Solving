// Problem Link : https://codeforces.com/problemset/problem/599/A     Time : 30 ms    Memory : 8 KB

#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int arr[3], x, y;

    cin>>arr[0]>>arr[1]>>arr[2];

    sort(arr, arr+3);

    x = arr[0] + arr[1] + arr[2];
    y = arr[0] * 2 + arr[1] * 2;

    if(arr[0] == arr[1] && arr[1] == arr[2]){
        cout<< x <<endl;
    }else{
        if(x < y){
            cout<< x <<endl;
        }else{
            cout<< y <<endl;
        }
    }

    return 0;
}
