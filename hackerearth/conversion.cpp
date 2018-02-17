#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    freopen("1.txt","r",stdin);
    int test;
    cin>>test;
cin.ignore(256, '\n'); 
    while(test--)
    {
            string s;
            getline(cin,s);
            for(int i=0;i<s.length();i++)
            {
                if(s[i]==' ')cout<<"$";
                else if(s[i]>='a') cout<<s[i]-'a'+1;
                else cout<<s[i]-'A'+1;


            }
            cout<<endl;



    }



return 0;
}
