//Problem Link : http://codeforces.com/problemset/problem/1075/A

#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n, x, y, white_move, black_move;

    cin>>n>>x>>y;

    white_move = min(abs(x-1), abs(y-1));
    black_move = min(abs(x-n), abs(y-n));

    if(white_move <= black_move){
        cout<<"White"<<endl;
    }else{
        cout<<"Black"<<endl;
    }

    return 0;
}
