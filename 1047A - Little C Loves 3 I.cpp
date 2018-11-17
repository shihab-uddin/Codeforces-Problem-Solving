#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, remainder, ans1, ans2, ans3;

    cin>>n;

    ans1 = 1;

    ans2 = 1;

    ans3 = n - 2;

    if(ans3 % 3 == 0){

        ans2 = 2;
        ans3 = n - 3;

    }

    cout<< ans1 <<" "<< ans2 <<" "<< ans3<<endl;

    return 0;
}
