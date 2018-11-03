#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, maxi, mini, dif_sock, same_sock;

    cin>>a>>b;

    maxi = max(a,b);

    mini = min(a,b);

    dif_sock = mini;

    same_sock = (maxi - mini) / 2;

    cout<<dif_sock<<endl;
    cout<<same_sock<<endl;

    return 0;
}
