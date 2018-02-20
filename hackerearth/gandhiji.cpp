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
        string s;
        cin>>s;
        bool boolval = true;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='0' && s[i]!='1' && s[i]!='8')
            {
                    boolval = false;
                    cout<<"NO"<<endl;
                    break;
            }


        }
       if(boolval)
       {
            string s2 = s;
            reverse(s2.begin(),s2.end());
            if(s2.compare(s)==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

       }



    }


return 0;
}
