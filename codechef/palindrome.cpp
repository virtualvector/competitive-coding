#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main(){
    
    int test;
    cin>>test;
    while(test--){

        string val;
        cin>>val;
        string val2="";
        for(int i=val.length()-1;i>=0;i--){
            val2+=val[i];
            
        }

        if(val==val2)cout<<"wins"<<endl;
        else cout<<"losses"<<endl;

    }

return 0;

}
