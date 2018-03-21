#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{

    string s;
    cin>>s;
    int sumval=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
        {
            sumval+=s[i]-'0';
        }


    }
    cout<<sumval<<endl;




}
