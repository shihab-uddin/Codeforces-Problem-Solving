#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, arr[13], sum = 0, cnt = 0;

    cin>>k;

    for(int i = 0; i < 12; i++){
        cin>>arr[i];
    }

    if(k == 0){
        cout<<0<<endl;
        return 0;
    }

    sort(arr, arr+12, greater<int>());

    for(int i = 0; i < 12; i++){
        sum += arr[i];
        cnt++;
        if(sum >= k) break;
    }

    if(sum < k)
        cout<<-1<<endl;
    else
        cout<<cnt<<endl;

    return 0;
}
