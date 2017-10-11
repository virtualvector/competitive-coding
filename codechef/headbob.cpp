#include<iostream>
#include<algorithm>

using namespace std;


int main(){

    int test;
    cin>>test;
    while(test--){
        
        string s;
        int junk;
        cin>>junk;
        cin>>s;

        if(find(s.begin(),s.end(),'I')!=s.end()){
                
                cout<<"INDIAN"<<endl;

        } 

        else if(find(s.begin(),s.end(),'Y')!=s.end() ){

            cout<<"NOT INDIAN"<<endl;


        }
        else cout<<"NOT SURE"<<endl;

    }

return 0;

}
