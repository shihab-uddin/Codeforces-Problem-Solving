#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=1;
    int arr[100005];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]!=arr[i+1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
