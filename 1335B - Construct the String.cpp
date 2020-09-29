#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, n , a, b;

    cin>>testCase;

    while(testCase--){
        int j = 0;
        cin>>n>>a>>b;
        for(int i = 0; i < n; i++){
            printf("%c", 'a'+j);
            if(j+2 > b || j+2 > a){
                j = 0;
            }else{
                j++;
            }
        }
        cout<<endl;
    }

    return 0;
}
