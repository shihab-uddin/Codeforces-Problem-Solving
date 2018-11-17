#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[2005];
    int n, k, ans = 0;

    cin>> n >> k;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    for(int i = 0; i < n; i++){

        if(n < 3) break;

        if((5 - arr[i] >= k) && (5 - arr[i+1] >= k) && (5 - arr[i+2] >= k)){
            ans++;
            i = i + 2;
        }
    }

    cout << ans << endl;

    return 0;
}
