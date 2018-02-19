#include<iostream>
#include<sstream>
#include<string>
#include<vector>

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
        vector<string> v;

        stringstream ss(s);
        string buff;
        while(ss>>buff)
        {
            v.push_back(buff);

        }
        int i,j;

        for(i=0,j=v.size()-1;i<j;i++,j--)
        {

            string temp = v[i];
            v[i] = v[j];
            v[j]=temp;

        }

        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";

        }
        cout<<endl;

    }




}
