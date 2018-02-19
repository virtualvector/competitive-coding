#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s;

        getline(cin,s);

        reverse(s.begin(),s.end());

        string::iterator iter;

        for(iter=s.begin();iter!=s.end();iter++)
        {
            string::iterator iter2= iter;

            while(iter!=s.end() && *iter!=' ') iter++;

            reverse(iter2,iter);

            
                        if(*iter == '\n' || iter == s.end())
                                        break;

        }
        cout<<s<<endl;


        }

return 0;

}
