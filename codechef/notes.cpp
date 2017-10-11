#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    int test;
    cin>>test;
    while(test--){

        int denom;
        int quot=0;
        cin>>denom;

        int a[]={100,50,10,5,2,1};
        int val;
        for(int i=0;i<5;i++){
            
            quot+=denom/a[i];
            denom=denom%a[i];

//            cout<<"after "<<a[i]<<"quotient "<<quot<<" denom is "<<denom<<endl;

        }
        cout<<quot<<endl;

    }

return 0;
}
