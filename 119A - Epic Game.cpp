#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){

    int a, b, n, r;

    cin>>a>>b>>n;

    while(n != 0){
        r = gcd(a, n);
        n = n - r;
        if(n < r){
            cout<<"0"<<endl;
            return 0;
        }
        r= gcd(b, n);
        n = n - r;
        if(n < r){
            cout<<"1"<<endl;
            return 0;
        }
    }

    return 0;
}
