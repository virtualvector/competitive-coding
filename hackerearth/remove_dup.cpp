#include<iostream>
#include<string>
#include<unordered_set>
#include<vector>

using namespace std;


int main()
{
    string s;
    cin>>s;
    unordered_set<char> ms;


    for(int i=0;i<s.length();i++)
    {
            if(ms.find(s[i])!=ms.end())
            {
                string::iterator iter=s.begin();
                advance(iter,i);
                s.erase(iter);
                i--;

            }
            else ms.insert(s[i]);


    }
    cout<<s<<endl;
    



}
