#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    s[0]= toupper(s[0]);
    for(int i=0;i<s.length();i++) 
    {
    if(s[i]==' ' && i!=s.length()-1)
    s[i+1]=toupper(s[i+1]);
    }

    cout<<s<<endl;


return 0;
}
