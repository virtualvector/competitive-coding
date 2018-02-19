#include<iostream>
#include<string>
#include<algorithm>
int m;
using namespace std;

bool sorterfunc(string s1,string s2)
{

    string s3 = s1.substr(0,m);
    string s4 = s2.substr(0,m);
    return s1.compare(s2);


}

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
        cin>>m;
        vector<string> v;

        while(m--)
        {

            string s;
            cin>>s;
            v.push_back(s);

        }

        stable_sort(v.begin(),v.end(),sorterfunc);

        cout<<v[k-1]<<endl;


    }



return 0;
}
