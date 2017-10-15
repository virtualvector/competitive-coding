#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--){

           string str;
           cin>>str;

           int am,br;
           am=count(str.begin(),str.end(),'a');
           br=count(str.begin(),str.end(),'b');

           cout<<min(am,br)<<endl;

    }



return 0;

}
