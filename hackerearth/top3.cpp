#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<string>

using namespace std;
bool sorter(pair<string,int> p1, pair<string,int> p2)
{
    
    return p1.second>p2.second;

}



int main()
{
    int n;
    cin>>n;
    vector< pair<string,int> > v;
    while(n--)
    {
        string s;
        int val;
        cin>>s>>val;
        v.push_back(make_pair(s,val));

    }

        sort(v.begin(),v.end(),sorter);

        for(int i=0;i<3;i++)
        {
            cout<<v[i].first<<endl;

        }

return 0;
}
