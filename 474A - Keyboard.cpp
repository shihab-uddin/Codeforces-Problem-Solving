#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    char direction;
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>direction>>input;
    int length = input.length();

    if(direction == 'L'){
        for(int i = 0; i < length; i++){
            for(int j = 0; j < 31; j++){
                if(str[j] == input[i]){
                    cout<<str[j+1];
                }
            }
        }
    }else{
        for(int i = 0; i < length; i++){
            for(int j = 0; j < 31; j++){
                if(str[j] == input[i]){
                    cout<<str[j-1];
                }
            }
        }
    }

    return 0;
}
