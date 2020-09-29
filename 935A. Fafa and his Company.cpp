#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair

using namespace std;

int main(){

    //freopen("input.txt", "r", stdin);

    int n, employee, leader = 1, cnt = 0;

    cin>>n;

    int temp = n;
    employee = n;

    while(leader < temp){
        n = employee - leader;
        if(n % leader == 0){
            cnt++;
        }
        leader++;
    }

    cout<<cnt<<endl;

    return 0;
}
