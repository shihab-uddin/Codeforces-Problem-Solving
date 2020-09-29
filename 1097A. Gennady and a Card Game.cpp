#include<bits/stdc++.h>
using namespace std;

int main(){

    char rank[13] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    char suit[4] = {'D', 'C', 'S', 'H'};
    string cardOnTable;
    string cardOnHand[10];

    cin>>cardOnTable;
    for(int i = 0; i < 5; i++){
        cin>>cardOnHand[i];
    }

    for(int i = 0; i < 5; i++){
        if(cardOnTable[0] == cardOnHand[i][0]){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    for(int i = 0; i < 5; i++){
        if(cardOnTable[1] == cardOnHand[i][1]){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
