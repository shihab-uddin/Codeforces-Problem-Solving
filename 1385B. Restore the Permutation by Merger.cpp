#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, angle;

    cin>>testCase;

    while(testCase--){
        int n, item;
        cin>>n;
        int vec_size = 2 * n;

        vector<int> vec(vec_size);

        for(int i = 0; i < vec_size; i++){
            cin>>item;
            vec[item]++;
            if(vec[item] == 1){
                cout<<item<<" ";
            }
        }
    }

    return 0;
}
