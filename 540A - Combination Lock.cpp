// Problem Link : http://codeforces.com/problemset/problem/270/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    int n, ans = 0;

    cin>>n>>str1>>str2;

    for(int i = 0; i < n; i++){
        ans = ans + min(10 - abs(str1[i] - str2[i]), abs(str1[i] - str2[i]));
    }

    cout<<ans<<endl;



    return 0;
}

