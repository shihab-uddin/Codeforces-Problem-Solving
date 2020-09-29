#include<bits/stdc++.h>
using namespace std;

int main(){

    //freopen("input.txt", "r", stdin);

    int testCase, n;

    cin>>testCase;

    while(testCase--){
        cin>>n;
        long long int cnt_2 = 0, cnt_3 = 0;
        while(!(n%2)){
            n = n / 2;
            cnt_2++;
        }
        while(!(n%3)){
            n = n / 3;
            cnt_3++;
        }

        if(n != 1 || cnt_2 > cnt_3){
            cout<<"-1"<<endl;
        }else{
            cout<<(cnt_3 - cnt_2) + cnt_3<<endl;
        }

    }

    return 0;
}
