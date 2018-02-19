#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        
        int n;
        cin>>n;
        int k;
        cin>>k;
        int m;
        cin>>m;
        vector<string,string> v;

        while(m--)
        {

            string s;
            cin>>s;
            string temp = s.substr(0,m);
            v.push_back(s);

        }

        stable_sort(v.begin(),v.end(),sorterfunc);

        cout<<v[k-1]<<endl;


    }



return 0;
}
