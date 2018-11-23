#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    int cnt = 0;

    cin>>n>>x;

    if(n >= x) cnt++;

    for(int i = 2; i <= n; i++){
        if(x%i == 0 && x/i <= n){
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
