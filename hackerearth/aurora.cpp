#include<iostream>
#include<string>
#include<utility>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {

        int n,q;
        cin>>n>>q;
        unordered_map<int,int> um;

        while(n--)
        {
            int val;
            cin>>val;

            um[val]+=1;

        }

        while(q--)
        {

            int quer;
            cin>>quer;
            cout<<um[quer]<<endl;

        }

    }



return 0;
}
