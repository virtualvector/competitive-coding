#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int test;
    cin>>test;
    if(test>10 || test<1)
    {cout<<"Invalid Test"<<endl;
    exit(0);
    }
    while(test--)
    {
        int counter=0;
        string s;
        cin>>s;
            
        bool val=false;
        if(s.length()>100 || s.length()<1) {
            cout<<"Invalid Input"<<endl;
            continue;

        }

        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i])) val=true;

        }
        if(val==false) cout<<"Invalid Input"<<endl;

        else
        {

            int uppercase=0,lowercase=0;

            for(int i=0;i<s.length();i++)
            {
                if(isupper(s[i])) uppercase++;
                else if(islower(s[i])) lowercase++;

            }
        
        if(uppercase>=lowercase)
        {
            for(int i=0;i<s.length();i++)
            {
                if(isalpha(s[i]) && islower(s[i])) {
                    counter++;

                }

            }


        }

        else if(uppercase<lowercase)
        {
            for(int i=0;i<s.length();i++)
            {
                if(isalpha(s[i]) && isupper(s[i])) 
                {
                    counter++;

                }

            }


        }


        cout<<counter<<endl;
    }

}

return 0;
}
