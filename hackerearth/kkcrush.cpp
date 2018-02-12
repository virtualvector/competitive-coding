#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;

int main()
{

   int test;
   cin>>test;
   while(test--)
   {
    int num;
    cin>>num;
    unordered_set<int> us;
    while(num--)
    {
        int val;
        cin>>val;
        us.insert(val);

    }
    int queries;
    cin>>queries;
    while(queries--)
    {
        
        int q;
        cin>>q;
        if(us.find(q)!=us.end())
        {
            cout<<"Yes"<<endl;

        }
        else cout<<"No"<<endl;


    }


   }

return 0;
}
