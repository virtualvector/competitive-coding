#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
int test;
cin>>test;


while(test--)
{
stack<char> ss;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {

            ss.push(s[i]); 

    }
bool flag = true;
    for(int i=0;i<s.length();i++)
    {

            if(s[i]!=ss.top())
            {
            flag = false; 
            break;
            }
            ss.pop();

    }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

}

return 0;
}

