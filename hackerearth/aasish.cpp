#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
#include<unordered_map>

using namespace std;

bool sorter_func(pair< char,int> p1, pair< char,int> p2)
{
        if(p1.second == p2.second) return p1.first > p2.first;
         else return p1.second> p2.second;


}

string applier(char c,int n)
{
string s;
    while(n--)
    {
        s.append(to_string(c));


    }
    return s;


}

string special_sort(string s)
{
    unordered_map<char,int> um;

    for(int i=0;i<s.size();i++)
    {
        um[s[i]]=count(s.begin(),s.end(),s[i]);

    }

    vector< pair<char,int> > v(um.begin(),um.end());

    sort(v.begin(),v.end(),sorter_func);

    string s2;

    for(int i=0;i<v.size();i++)
    {
            string ns = applier(v[i].first,v[i].second);
            s2.append(ns);

    }



}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
            string s;
            cin>>s;
            cout<<special_sort(s)<<endl;



    }



return 0;
}
