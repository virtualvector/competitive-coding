#include<iostream>
#include<unordered_set>
#include<vector>
#include<map>
#include<unordered_map>
#include<string>
#include<algorithm>

using namespace std;

bool sorter(pair<string,int> p1, pair<string,int> p2)
{
        return p1.second > p2.second;

}

int main()
{
    int num;
    cin>>num;
    unordered_map<string,int> um;
    unordered_set<string> us;
    while(num--)
    {

        string s1,s2;
        cin>>s1>>s2;

        
        if(us.find(s1)==us.end())
        {
        um[s2]+=1;
        us.insert(s1);
        }


    }

    vector< pair<string,int> > v(um.begin(),um.end());

    sort(v.begin(),v.end(),sorter);

    cout<<(v[0].first)<<endl<<um["football"]<<endl;





return 0;
}
