#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair

using namespace std;

int main(){

    //freopen("input.txt", "r", stdin);

    int a, b, c, d, ans = 0;
    string str;

    cin>>a>>b>>c>>d;

    cin>>str;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1'){
            ans += a;
        }else if(str[i] == '2'){
            ans += b;
        }else if(str[i] == '3'){
            ans += c;
        }else{
            ans += d;
        }
    }

    cout<<ans<<endl;

    return 0;
}
