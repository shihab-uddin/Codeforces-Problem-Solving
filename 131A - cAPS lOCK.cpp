#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int count=0;
    cin>>str;
    for(int i=1; i<str.length(); i++){
        if(str[i]>=65 && str[i]<=90){
            count++;
        }
    }
    if(count==str.length()-1){
        for(int i=0; i<str.length(); i++){
            if(str[i]>=65 && str[i]<=90){
                str[i]=str[i]+32;
            }else{
                str[i]=str[i]-32;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
