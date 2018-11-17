//Problem Link : http://codeforces.com/problemset/problem/1076/A    Time : 46 ms

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, i;
    string str;
    cin>>n>>str;

    for(i = 0; i < str.length() - 1; i++){

        if(str[i] > str[i+1]) break;

    }

    str.erase(i, 1);

    cout<<str<<endl;
}
