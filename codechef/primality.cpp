#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool check_prime(int num){

    for(int i=2;i<num/2;i++){
            
            if(num%i==0) return 0;

    }
    return 1;


}


int main(){

    int test;
    cin>>test;

    while(test--){
        
        int number;
        cin>>number;
        if(check_prime(number)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;


    }

return 0;
}
