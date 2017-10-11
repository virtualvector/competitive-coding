#include<iostream>
#include<algorithm>
#include<vector>

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

            sort(v.begin(),v.end());
            cout<<v[0]+v[1]<<endl;

        }

return 0;

}

