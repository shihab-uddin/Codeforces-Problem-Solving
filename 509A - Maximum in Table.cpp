//Problem link : http://codeforces.com/problemset/problem/509/A    Time : 31 MS    Memory : 4 KB

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[11][11];
    int n;

    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[0][j] = 1;
            arr[i][0] = 1;
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }

    cout<<arr[n-1][n-1]<<endl;

    return 0;
}
