#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair

using namespace std;

int main(){

    //freopen("input.txt", "r", stdin);

    int testCase, a[3];

    cin>>testCase;

    while(testCase--){
        cin>>a[0]>>a[1]>>a[2];

        sort(a, a+3);

        if(a[1] == a[2]){
            cout<<"YES"<<endl;
            cout<<a[2]<<" "<<a[0]<<" "<<a[0]<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
