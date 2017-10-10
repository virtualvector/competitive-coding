#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int fact(int val){

    if(val==0 || val==1) return 1;
    else return val*fact(val-1);

}

int main(){

    int test;
    cin>>test;

    while(test--){

        int val;
        cin>>val;
        cout<<fact(val)<<endl;


    }

return 0;

}

