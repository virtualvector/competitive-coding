#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
bool isalready(string s)
{
    int start=0; int end = s.length()-1;

    while(start!=end)
    {
        if(s[start]!=s[end]) return false;
        start++; end--;

    }
    return true;


}

int main()
{
    string s;
    cin>>s;
    if(!isalready(s)) cout<<s.length();
    else if(count(s.begin(),s.end(),s[0])==s.length()) cout<<0;
    else cout<<s.length()-1;





return 0;
}
