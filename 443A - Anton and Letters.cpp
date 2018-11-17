#include<bits/stdc++.h>
using namespace std;
int cnt[26];
int result,j;

int main(){
    char str[1005];
    gets(str);
    int length=strlen(str);
    for(int i=0; i<length; i++){
        if(str[i]>=97 && str[i]<=122){
            j=str[i]-'a';
            cnt[j]=1;
            j++;
        }
    }
    for(int i=0; i<26; i++){
        result=result+cnt[i];
    }
    cout<<result<<endl;
    return 0;
}
