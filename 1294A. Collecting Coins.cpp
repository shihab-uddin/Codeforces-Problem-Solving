#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, a, b, c, n, avg;

    cin>>testCase;

    while(testCase--){
        cin>>a>>b>>c>>n;

        if((a+b+c+n)%3 == 0){
            avg = (a+b+c+n) / 3;
            if(a <= avg && b <= avg && c <= avg){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
