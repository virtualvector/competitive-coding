#include<iostream>
#include<algorithm>


using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--){
    
        string x,y;
        cin>>x;
        cin>>y;
        int boolvalue=1;
        for(int i=0;i<x.length();i++){
                
                if(x[i]!=y[i]){
                        if(!(x[i]=='?' || y[i]=='?')){
                            
                            boolvalue=0;break;
                        }

                }

        }
        if(boolvalue)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }


}
