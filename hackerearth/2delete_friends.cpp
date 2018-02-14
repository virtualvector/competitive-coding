#include<iostream>
#include<list>
#include<vector>

using namespace std;


void delete_friend(list<int>& ll,int num)
{

    bool delfrnd=false;

    auto iter1 = ll.begin();
    auto iter2 = (ll.begin());
    advance(iter2,1);

    while(iter2!=ll.end() && num>0)
    {
        if(*iter1<*iter2)
        {
           iter1= ll.erase(iter1);
            num--;
           if(iter1==ll.begin())
           {
                iter2=ll.begin();
                advance(iter2,1);

                continue;
           }
           else
           {
                iter2=iter1;
                advance(iter1,-1);
                continue;

           }
            
        }
        iter1++;iter2++;

    }
    while(num--)
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


                delete_friend(ll,del);


        for(auto& x: ll)
        {
            cout<<x<<" ";

        }
        
        cout<<endl;



    }




return 0;
}
