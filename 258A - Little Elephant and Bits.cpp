#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    string n;
    int pos;
    cin>>n;

    pos = n.find('0');

    if(pos == -1){
        cout<<n.substr(1)<<endl;
    }else{
        cout<<n.substr(0, pos)<<n.substr(pos+1);
    }
    return 0;
}
