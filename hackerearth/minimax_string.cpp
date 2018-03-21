#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

vector<int> find_index(map<char,int>& m,string a,string b)
{

    auto iter = m.begin();
    vector<int> v;
    for(iter;iter!=m.end();iter++)
    {
        int n= iter->second;
        char ch = iter->first;

        for(int i=0;i<a.size();i++)
        {
            if(a[i]==ch) n--;
            if(n==0)
            {v.push_back(i);
            break;
            }


        }
        if(n>0) v.push_back(-1);


    }
return v;


}


int main()
{
    string a,b;
    cin>>a;
    cin>>b;

    map<char,int> m;

    for(int i=0;i<b.size();i++)
    {

        m[b[i]]++;

    }
    auto iter = m.begin();
    for(;iter!=m.end();iter++)
    {

        cout<<(iter->first)<<" "<<(iter->second)<<endl;

    }
    cout<<endl;


    cout<<endl;
    vector<int> v = find_index(m,a,b);
    /*
    for(int i=0;i<v.size();i++)
    {

            cout<<v[i]<<" ";

    }
    cout<<endl;
    */
    int mini = *std::min_element(v.begin(),v.end());
    int maxi = *std::max_element(v.begin(),v.end());
    cout<<mini<<" "<<maxi<<endl;
    cout<<a.substr(mini,(maxi,mini))<<endl;

return 0;
}
