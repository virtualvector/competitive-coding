#include<iostream>
#include<algorithm>
#include<string>


using namespace std;
int main()
{
    string s;
    cin>>s;

    cout<<count(s.begin(),s.end(),'q');
    cout<<endl<<s.length()<<endl;


return 0;
}
