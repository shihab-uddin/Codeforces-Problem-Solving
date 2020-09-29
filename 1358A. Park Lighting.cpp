#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, n, m, area = 0;

    cin>>testCase;

    while(testCase--){
        cin>>n>>m;
        area = n * m;
        if(area % 2 == 0){
            cout<<area/2<<endl;
        }else{
            cout<<(area/2)+1<<endl;
        }
    }

    return 0;
}
