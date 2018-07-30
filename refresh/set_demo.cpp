#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    set<int> s;
    s.insert(2);


    auto iter = s.begin();

    for(;iter!=s.end();iter++)
    {
        s.erase(iter);
    }


    s.insert(4);
    s.insert(5);
     iter = s.begin();

    for(;iter!=s.end();iter++)
    {
        cout<<(*iter)<<endl;
    }
    iter = s.find(4);
    s.erase(4);

     iter = s.begin();

    for(;iter!=s.end();iter++)
    {
        cout<<(*iter)<<endl;
    }

    

return 0;
}
