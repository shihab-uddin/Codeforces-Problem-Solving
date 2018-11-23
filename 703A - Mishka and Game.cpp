#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int m, c, mashika = 0, chris = 0;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>m>>c;
        if(m > c){
            mashika++;
        }else if(m == c){
            mashika++;
            chris++;
        }
        else{
            chris++;
        }

    }

    if(mashika > chris)
        cout<<"Mishka"<<endl;
    else if(mashika == chris)
        cout<<"Friendship is magic!^^"<<endl;
    else
        cout<<"Chris"<<endl;

    return 0;
}
