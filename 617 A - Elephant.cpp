#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int num;
    int result=0,vs;
    cin>>num;
    if(num==1 || num==2 || num==3 || num==4 || num==5){
        result=1;
        cout<<result<<endl;
        return 0;
    }
    if(num>5){
        result=num/5;
        vs=num%5;

    }
    if(vs==1 || vs==2 || vs==3 || vs==4 || vs==5){
        result+=1;
    }
    cout<<result<<endl;
    return 0;
}
