#include<iostream>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        bool flag = true;

        for(int i=0;i<s.length()-1;i++)
        {


        if(s[i]=='z' || s[i]=='a')
        {
                if(s[i]=='z' && (s[i+1]!='a' && s[i+1]!='b')) flag = false;
                else if(s[i]=='a' && (s[i+1]!='z' && s[i+1]!='b'))flag = false;

        }
        
            else if(fabs(s[i]-s[i+1])!=1)
            {
            flag = false;
            break;
            }


        }



        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }




return 0;
}
