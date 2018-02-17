#include<iostream>
#include<algorithm>
#include<string>
#include<set>
#include<deque>

using namespace std;

int main()
{

    int test;
    cin>>test;
    while(test--)
    {
        
        deque<char> dq;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
                if(find(dq.begin(),dq.end(),s[i])==dq.end())
                {
                    dq.push_back(s[i]);
                }

        }
        auto iter = dq.begin();
        for(iter;iter!=dq.end();iter++)
        {
            cout<<(*iter);



        }
        

        cout<<endl;
    }


return 0;
}
