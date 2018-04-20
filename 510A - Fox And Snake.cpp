#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,sign = 1;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        if(n%2==0){
            n = n-1;
        }
        if(i%2==0){
            for(int j=0; j<m; j++){
                cout<<"#";
            }
        }else{
            if(sign==1){
                for(int j=0; j<m; j++){
                    if(j==(m-1)){
                        cout<<"#";
                    }else{
                        cout<<".";
                    }
                }
                sign=sign*(-1);
            }else{
                if(sign==(-1)){
                    for(int j=0; j<m; j++){
                        if(j==0){
                            cout<<"#";
                        }else{
                            cout<<".";
                        }
                    }
                }
                sign = sign*(-1);
            }
        }
        cout<<endl;
    }
    return 0;
}
