///Problem Link : http://codeforces.com/problemset/problem/579/A                     Time : 31 s

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, ans = 0;

    cin>>n;

    while(n >= 1){
        if(n%2 == 1){
            ans++;
            n--;
        }else{
            n /= 2;
        }
    }

    cout<<ans<<endl;

    return 0;


}
