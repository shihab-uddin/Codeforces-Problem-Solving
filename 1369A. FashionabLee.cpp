#include<bits/stdc++.h>
using namespace std;

int main(){

    //freopen("input.txt", "r", stdin);

    int testCase, n;

    cin>>testCase;

    while(testCase--){

        cin>>n;

        if(!(n%4)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
