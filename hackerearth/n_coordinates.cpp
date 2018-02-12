#include<iostream>
#include<map>
#include<utility>

using namespace std;

int main()
{

    int test;
    cin>>test;
    map< pair<int,int> , int> mp;
    while(test--)
    {
        int x,y;
        cin>>x>>y;
        pair<int,int> p1(x,y);
        if(mp.find(p1)!=mp.end()) mp[p1]+=1;
        else mp.insert(make_pair(p1,1));



    }
    for(auto& x: mp)
    {
        cout<<(x.first.first)<<" "<<(x.first.second)<<" "<<(x.second)<<endl;

    }


return 0;
}
