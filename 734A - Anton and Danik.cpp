#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100003];
    int n,a=0,d=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    for(int i=0; i<n; i++){
        if(str[i]=='A'){
            a++;
        }else{
            d++;
        }
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }
    else if(d>a){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}
