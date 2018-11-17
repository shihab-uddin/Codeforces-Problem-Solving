#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main(){
    int n,sum=0,j=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0; i<str.length(); i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
    }

    for(int i=0; i<str.length(); i++){
        j=str[i]-'a';
        arr[j]=1;
    }

    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    if(sum==26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
