#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    map<int,int> m ;
    m[2]=3;
    m[5]=5;
    m[4]+=1;
    auto iter = m.begin();
    for(iter;iter!=m.end();iter++)
    {

        cout<<(iter->first)<<" "<<(iter->second)<<endl;
    }
    cout<<endl;    
    auto finder = m.find(5);
    m.erase(finder);
    m.insert(pair<int,int>(100,100));

    for(iter=m.begin();iter!=m.end();iter++)
    {

        cout<<(iter->first)<<" "<<(iter->second)<<endl;
    }





return 0;
}
