#include<iostream>
#include<vector>


using namespace std;


int main(){
    
    int test;
    cin>>test;
    while(test--){
        
        int num;
        cin>>num;
        int x=1,tmp;
        cin>>tmp;
        num--;
        while(num--){
            
            int val;
            cin>>val;
            if(val<=tmp){
                tmp=val;
                x++;
            }

        }
        cout<<x<<endl;

    }

return 0;
}
