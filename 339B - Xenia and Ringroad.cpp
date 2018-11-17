// Problem Link : https://codeforces.com/problemset/problem/339/B

#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n, m, check = 0, sum = 0;
    long long int arr[100005];

    cin>>n>>m;

    for(int i = 0; i < m; i++){
        cin>>arr[i];
        if(check == 0){
            sum += sum + arr[0] - 1;
            check = 1;
        }
    }

    for(int i = 1; i < m; i++){
        if(arr[i-1] <= arr[i]){
            sum = sum + abs(arr[i] - arr[i-1]);
        }else{
            sum = sum + (n - abs(arr[i-1] - arr[i]));
        }
    }

    cout<<sum<<endl;

    return 0;
}
