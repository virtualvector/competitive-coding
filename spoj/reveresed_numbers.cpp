#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

void pre_process(string& s1,string& s2)
{
        auto iter = s1.begin();

        while(iter!=s1.end())
        {
            if(*iter=='0')
            {
                s1.erase(iter);
                continue;
            }
            else break;
        }
        iter = s2.begin();
        while(iter!=s2.end())
        {
            if(*iter=='0')
            {
                s2.erase(iter);
                continue;
            }
            else break;
        }


}

void pre_process(string& s1)
{
        auto iter = s1.begin();

        while(iter!=s1.end())
        {
            if(*iter=='0')
            {
                s1.erase(iter);
                continue;
            }
            else break;
        }

}


int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string s1,s2;
        cin>>s1>>s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        pre_process(s1,s2);


     int i1 =stoi(s1);
     int i2 = stoi(s2);
     int i3 = i1+i2;
    string s3(to_string(i3));

    reverse(s3.begin(),s3.end());

    pre_process(s3);
    cout<<s3<<endl;
     

     }


return 0;
}
