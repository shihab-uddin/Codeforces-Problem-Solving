#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, sum = 0, cnt = 0;
    int arr[100005];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            sum = sum + arr[i];
        }else if(sum > 0){
            sum--;
        }else{
            cnt++;
        }
    }

    cout<<cnt<<endl;
}
