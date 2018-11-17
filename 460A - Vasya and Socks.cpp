#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,quo,rem,pre_day,result=0;
    cin>>n>>m;
    pre_day=n;
    while(n>=m){
        quo = n/m;
        rem = n%m;
        n=quo+rem;
        result=result+quo;

    }
    cout<<pre_day+result<<endl;
    return 0;
}
