#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

bool predicate(pair<int,int> p1,pair<int,int> p2)
{

    return p1.second < p2.second;


}

int main()
{
    int n;
    cin>>n;
    
    vector< pair<int,int> >v;
    int i=1;
    while(n--)
    {
        
        int ti,di;
        cin>>ti>>di;

        v.push_back( make_pair(i++,ti+di));


    }

    stable_sort(v.begin(),v.end(),predicate);
    
    for(auto& x: v)
    {
        cout<<(x.first)<<" ";

    }


return 0;

}
