#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--){
        
        int m,n;
        cin>>n>>m;
        unordered_map<int,int> um;
        for(int i=0;i<m;i++){
            
            int temp;
            cin>>temp;
            um[temp]=temp;

        }

        int count=0;
        vector<int> chef,asst;
        for(int i=1;i<=n;i++){
            
            if(um.find(i)==um.end()){
                if(count%2==0){
                    chef.push_back(i);
                    count++;
                }
                else{
                    asst.push_back(i);
                    count++;
                }

            }

        }
        if(chef.size()==0)cout<<"\n";
        else {
            for(int i=0;i<chef.size();i++)cout<<chef[i]<<" ";
            cout<<"\n";

        }
        

        if(asst.size()==0)cout<<"\n";
        else {
            for(int i=0;i<asst.size();i++)cout<<asst[i]<<" ";

            cout<<"\n";

        }




    }

return 0;
}

