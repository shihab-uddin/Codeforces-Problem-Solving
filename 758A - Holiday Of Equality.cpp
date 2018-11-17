///http://codeforces.com/problemset/problem/758/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, maxi, arr[1000005], sum = 0;
    cin>>n;

    for(int i = 0;  i < n; i++){
        cin>>arr[i];
    }

    if(n == 1){
        cout<<"0"<<endl;
        return 0;
    }

    sort(arr, arr+n, greater<int>());

    maxi = arr[0];

    for(int i = 0; i < n; i++){
        sum = sum + (maxi - arr[i]);
    }
    cout<< sum <<endl;
}
