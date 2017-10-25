#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--){

        int wire,sheet;
        cin>>wire>>sheet;
        float first,second;
        first = (float)sheet/12;
        second = (float)sheet/6;
        float volume = pow(min(first,second),3);
        cout<<first<<" "<<second<<" "<<volume<<endl;

    }

return 0;
}
