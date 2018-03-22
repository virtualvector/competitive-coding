#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<algorithm>
#include<string>


using namespace std;

bool predicate(pair<string,int> p1, pair<string,int> p2)
{
    if((p1.second > p2.second) ||(p1.second)<(p2.second))
    {

    if(p1.second < p2.second) return false;
    else return true;

    }

    else if(p1.second == p2.second)
    {
        string s1 = p1.first;
        string s2 = p2.first;

        bool boolean = true;

        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i]) boolean = false;

        }
        bool boolean2 = true;

        for(int i=0;i<s2.size();i++)
        {
            if(s1[i]!=s2[i]) boolean2 = false;

        }

        if(boolean or boolean2)
        {
            int size1 = s1.size();
            int size2 =s2.size();

            if(size1<size2) return -1;
            else return 1;


        }
        else return
        lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end());


    }



}




int main()
{

    int test;
    cin>>test;
    vector< pair<string,int> > v;
    while(test--)
    {

       string s;int val;
       cin>>s>>val;
        v.push_back(pair<string,int>(s,val));


    }
    sort(v.begin(),v.end(),predicate);

    for(int i=0;i<v.size();i++)
    {
        cout<<(v[i].first)<<(v[i].second)<<endl;


    }


return 0;
}
