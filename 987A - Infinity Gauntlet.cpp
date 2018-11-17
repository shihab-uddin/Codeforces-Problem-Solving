#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    string inp;
    map <string, string> mp;
    map <string, string> :: iterator it;

    mp["purple"] = "Power";
    mp["green"] = "Time";
    mp["blue"] = "Space";
    mp["orange"] = "Soul";
    mp["red"] = "Reality";
    mp["yellow"] = "Mind";

    cin>>n;

    m = 6 - n;

    cout<<m<<endl;

    for(int i = 0; i < n; i++){
        cin>>inp;
        mp[inp] = "x";
    }

    for(it = mp.begin(); it != mp.end(); it++){

        if(it->second != "x"){
            cout<< it->second <<endl;
        }
    }

    return 0;
}
