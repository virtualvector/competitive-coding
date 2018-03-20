#include<iostream>
#include<utility>
#include<vector>
#include<unordered_map>

using namespace std;


int main()
{
    int test;
    cin>>test;
    while(test--)
    {
            
            int n;
            cin>>n;
            vector<int> v(n);
            for(int i=0;i<n;i++) cin>>v[i];
            int k;
            cin>>k;
            bool flag=false;

            unordered_map<int,int> um;
            for(int i=0;i<v.size();i++)
            {
                if(um.find(v[i])==um.end())
                {

                    um.insert(pair<int,int>(k-v[i],i));


                }
                else {
                    unordered_map<int,int>::iterator iter;
                    iter = um.find(v[i]);
                    cout<<(iter->second)<<" "<<i<<endl;
                    flag=true;
                    break;


                }


            }
            if(flag==false) cout<<-1<<" "<<-1<<endl;


    }




return 0;
}
