#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, angle;

    cin>>testCase;

    while(testCase--){
        cin>>angle;
        if(360 % (180 - angle) == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
