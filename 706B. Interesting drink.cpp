#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, q, coin, ans = 0;
    int price[100005];

    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>price[i];
    }

    sort(price, price+n);

    cin>>q;

    for(int i = 0; i < q; i++){
        cin>>coin;
        ans = upper_bound(price, price+n, coin) - price;
        cout<<ans<<endl;
    }

    return 0;
}
