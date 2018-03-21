#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<vector>

using namespace std;

int main()
{

string s;
getline(cin,s);

vector<string> v;

char* tok  = strtok(const_cast<char*>(s.c_str())," ");
while(tok!=NULL)
{   

v.push_back(string(tok));
tok = strtok(NULL," ");


}

for(int i=0;i<v.size();i++)
{
    reverse(v[i].begin(),v[i].end());
    cout<<v[i]<<" ";



}
cout<<endl;

return 0;
}
