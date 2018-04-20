#include<bits/stdc++.h>
using namespace std;

int arr[30];

int main(){
    string str_g, str_h, str_pile;
    int temp=0,tmp_g=0,tmp_h=0,check=0;
    cin>>str_g>>str_h>>str_pile;

    for(int i=0; i<str_pile.length(); i++){
        temp = str_pile[i]-'A';
        arr[temp]++;
    }
    for(int i=0; i<str_g.length(); i++){
        tmp_g=str_g[i]-'A';
        arr[tmp_g]--;
    }
    for(int i=0; i<str_h.length(); i++){
        tmp_h=str_h[i]-'A';
        arr[tmp_h]--;
    }
    for(int i=0; i<26; i++){
        if(arr[i]==0){
            check=0;
        }else{
            check=1;
            break;
        }
    }
    if(check==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}

