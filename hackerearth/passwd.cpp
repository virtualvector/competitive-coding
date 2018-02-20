#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
bool ispalin(string s1,string s2)
{
        
    string s3=s1; reverse(s3.begin(),s3.end());

    if(s2.compare(s3)==0)return true;
    else return false;


}

int main()
{
    int test;
    cin>>test;
    vector<string> v;
    while(test--)
    {

        string s;
        cin>>s;
        v.push_back(s);


    }

    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            
            if(ispalin(v[i],v[j]))
            {
                cout<<v[i].length()<<" "<<v[i][v[i].length()/2];
            }

        }


    }



return 0;
}
