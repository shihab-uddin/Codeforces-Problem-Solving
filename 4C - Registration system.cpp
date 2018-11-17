// Problem Link : https://codeforces.com/problemset/problem/4/C       Time : 1214 MS       Memory : 788 KB

#include<bits/stdc++.h>
using namespace std;

map <string, int> mp;

int main(){

    int n;
    string str;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>str;
        if(mp.count(str) == 0){
            cout<<"OK"<<endl;
            mp[str] = 1;
        }else{
            cout<<str<<mp[str]<<endl;
            mp[str]++;
        }
    }

    return 0;
}
