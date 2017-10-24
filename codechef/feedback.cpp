#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    
    int test;
    cin>>test;
    while(test--){
            
            string s;
            cin>>s;
                
            if(s.find("010")!=std::string::npos ||
            s.find("101")!=std::string::npos)cout<<"Good"<<endl;
            else cout<<"Bad"<<endl;

    }

return 0;
}
