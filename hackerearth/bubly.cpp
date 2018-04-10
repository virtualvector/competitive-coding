#include<iostream>
#include<vector>
#include<stack>
#include<string>


using namespace std;


int main()
{
    int test;
    cin>>test;
    int counter=0;
    while(test--)
    {

        string s;
        cin>>s;
        stack<char> ss;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
            if(!ss.empty() && ss.top()=='A') ss.pop();
            else ss.push(s[i]);
            }

            else if(s[i]=='B')
            {
                if(!ss.empty() && ss.top()=='B') ss.pop();
                else ss.push(s[i]);

            }

        }
        counter+=ss.empty();




    }

cout<<counter<<endl;



return 0;
}
