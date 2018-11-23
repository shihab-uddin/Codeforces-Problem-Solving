#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, zero = 0, one = 0;
    string str;

    cin>>n>>str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '0'){
            zero++;
        }else{
            one++;
        }
    }

    cout<<abs(zero - one)<<endl;

    return 0;
}
