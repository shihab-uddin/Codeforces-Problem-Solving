///Problem Link : https://codeforces.com/problemset/problem/230/A

/* NB : Here condition is : "Kirito can fight the dragons in any order".
That's why... I used Pair & sort them to find the less strength number to defeat the dragon. */

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector< pair<int,int> > num_pair;

    int s, n, x1, y1;

    cin>>s>>n;

    for(int i = 0; i < n; i++){

        cin>>x1>>y1;
        num_pair.push_back(make_pair(x1,y1));

    }

    sort(num_pair.begin(), num_pair.end());

    for(int i = 0; i < n; i++){
        if(s > num_pair[i].first){
            s = s + num_pair[i].second;
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}
