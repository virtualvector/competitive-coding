#include<iostream>
#include<algorithm>
#include<utility>
#include<unordered_map>

using namespace std;

int main()
{

    unordered_map<int,int> um;

    um.insert(make_pair(2,3));
    um.insert(make_pair(3,3));
    um.insert(make_pair(4,3));
    um.insert(make_pair(5,3));


    unordered_map<int,int>::iterator iter;

    if(um.find(2)!=um.end())
    {
        iter = um.find(2);
        iter->second +=1;
    }

    for(auto& x:um)
    {
        cout<<(x.first)<<" "<<(x.second)<<endl;

    }


return 0;
}
