#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int test;
    cin>>test;
    
    while(test--){
        
        int a,b,c;
        vector<int> v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        cout<<v[1]<<endl;
    
    }

return 0;}
