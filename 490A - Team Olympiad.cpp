#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[5005], t1[5005], t2[5005], t3[5005];
    int n, t, mini, one = 0, two = 0, three = 0;

    cin>>n;

    for(int i = 1; i <= n; i++){
        cin>>arr[i];
    }

    for(int i = 1; i <= n; i++){

        if(arr[i] == 1){

            t1[one++] = i;

        }else if(arr[i] == 2){

            t2[two++] = i;

        }else{

            t3[three++] = i;

        }
    }


    mini = min(one, two);
    mini = min(mini, three);

    if(mini == 0){
        cout<<0<<endl;
        return 0;
    }

    cout<<mini<<endl;

    for(one = 0, two = 0, three = 0; one < mini, two < mini, three < mini; one++, two++, three++){

        cout<<t1[one]<<" "<<t2[two]<<" "<<t3[three]<<endl;

    }


    return 0;
}
