#include<iostream>
#include<vector>


using namespace std;

int main(){
    
    int test;
    cin>>test;
    while(test--){
            
            int num;
            cin>>num;
            vector<int> v(num);
            for(int i=0;i<num;i++)cin>>v[i];
            vector<int> v2(v.begin(),v.end());
            int counter=0;

            for(int i=1;i<v.size();i++){
                    
                    if(v[i]>v[i-1]){
                        v[i]=v[i-1];
                        counter++;

                    }

            }

            cout<<v.size()-counter<<endl;

    }

return 0;
}
