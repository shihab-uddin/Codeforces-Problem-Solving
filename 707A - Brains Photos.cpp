#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[105][105];
    int m, n, check = 0;

    cin>>m>>n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }


    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y'){
                check = 1;
                break;
            }
        }
    }


    if(check == 1){
        cout<<"#Color"<<endl;
    }else{
        cout<<"#Black&White"<<endl;
    }
    return 0;
}
