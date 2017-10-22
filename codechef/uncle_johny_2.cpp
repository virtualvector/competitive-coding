#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main(){

    
    int test;
    cin>>test;
    while(test--){
            
            int len;
            cin>>len;
            vector<int> v(len);
            for(int i=0;i<v.size();i++){
                cin>>v[i];

            }

            int counter=0;
            int value;
            cin>>value;
            for(int i=0;i<v.size();i++){
                if(v[i]<v[value-1])counter++;
            }
            cout<<(++counter);

    }
return 0;
}
