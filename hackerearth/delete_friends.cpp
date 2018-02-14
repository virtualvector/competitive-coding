#include<iostream>
#include<list>
#include<vector>

using namespace std;


void delete_friend(list<int>& ll)
{

    bool delfrnd=false;

    auto iter1 = ll.begin();
    auto iter2 = (ll.begin());
    advance(iter2,1);

    while(iter2!=ll.end())
    {
        if(*iter1<*iter2)
        {
           iter1= ll.erase(iter1);
           delfrnd = true;
           break;
            
        }
        iter1++;iter2++;

    }
    if(delfrnd==false)
    {
            iter1 = ll.begin();
            advance(iter1,ll.size()-1);
            iter1=ll.erase(iter1);
    }


}

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        
        int fr,del;
        cin>>fr>>del;

        list<int> ll;
        while(fr--)
        {
            int val;
            cin>>val;
            ll.emplace_back(val);

        }

        while(del--)
        {

                delete_friend(ll);

        }

        for(auto& x: ll)
        {
            cout<<x<<" ";

        }
        
        cout<<endl;



    }




return 0;
}
