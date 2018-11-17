///Problem link : https://codeforces.com/problemset/problem/144/A


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, mini, maxi ,mini_position, maxi_position, mini_move, maxi_move;

    int arr[105], flag = 0;

    cin>>n;

    for(int i = 1; i <= n; i++){
        cin>>arr[i];
    }

    mini = arr[1];
    maxi = arr[1];

    // Firstly we have found minimum & maximum data

    for(int i = 1; i <= n; i++){
        mini = min(arr[i], mini);
    }

    for(int i = 1; i <= n; i++){
        maxi = max(arr[i], maxi);

    }

    // Then you have found the position of maximum & minimum data

    for(int i = 1; i <= n; i++){
        if(arr[i] == mini){
            mini_position = i;
            mini_move = n - i;
        }
    }

    for(int i = 1; i <= n; i++){
        if(arr[i] == maxi){
            maxi_position = i;
            maxi_move = i - 1;
            break;
        }
    }

    // When minimum data will stay before maximum data, then if maximum data get it's position(At First).
    // After that minimum data change it's position for one location(from left to right). so that's why Flag.

    if(mini_position < maxi_position)
        flag = 1;

   cout<<(mini_move + maxi_move) - flag<<endl;



    return 0;
}
