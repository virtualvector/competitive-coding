#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    int num;
    cin>>num;
    map<string,int> m;

    while(num--)
    {
        string s;
        cin>>s;
        m[s]+=1;

    }

    for(auto& x:m)
    {
        cout<<(x.first)<<" "<<(x.second)<<endl;
    }


return 0;
}
