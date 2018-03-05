#include<bits/stdc++.h>
using namespace std;

int arr[105];

int main(){
    int n,p,q;
    int temp,check=1;
    cin>>n>>p;
    for(int i=0; i<p; i++){
        cin>>temp;
        arr[temp]=1;
    }
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>temp;
        arr[temp]=1;
    }
    for(int i=1; i<=n; i++){
        if(arr[i]==1){
            check=1;
        }else{
            check=0;
            break;
        }
    }
    if(check==1){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
