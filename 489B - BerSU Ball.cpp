#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m, mini, maxi = 0, cnt = 0;
    int arr1[105], arr2[105], diff[105];

    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }

    sort(arr1, arr1+n);

    cin>>m;

    for(int i = 0; i < m; i++){
        cin>>arr2[i];
    }

    sort(arr2, arr2+m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(abs(arr1[i] - arr2[j]) <= 1){
                cnt++;
                arr2[j] = 500;
                break;
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}
