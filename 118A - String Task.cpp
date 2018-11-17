#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[105];
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
        if(str[i]!='a' && str[i]!='o' && str[i]!='y' && str[i]!='e' && str[i]!='u' && str[i]!='i'){
            cout<<"."<<str[i];
        }
    }
    return 0;
}
