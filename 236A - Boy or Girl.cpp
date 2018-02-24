#include <bits/stdc++.h>
using namespace std;

char str[105];
int cnt[105];

int main()
{
    int check=0;
    gets(str);
    int length= strlen(str);
    for(int i=0; i<length; i++){
        cnt[str[i]-'a']++;
    }
    for(int i=0; i<=26; i++){
        if(cnt[i]!=0){
            cnt[i]=1;
        }
    }
    for(int i=0; i<=26; i++){
        if(cnt[i]==1){
            check++;
        }
    }
    if(check%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
