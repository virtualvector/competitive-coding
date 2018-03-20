#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>

using namespace std;


int main()
{
        vector<string> v;
        string s;
       getline(cin,s);

        stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, ' ')) {
        v.push_back(item);
    }
 

        for(int i=0;i<v.size();i++)
        {
            cout<<s[i];

        }
        cout<<endl;

return 0;
}
