#include<iostream>
#include<string>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {

        string s;
        cin>>s;
    int counter=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' ||s[i]=='u')
            counter++;



        }
        cout<<counter<<endl;


    }


return 0;
}
