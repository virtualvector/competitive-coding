#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];
    
    bool flag=false;
    int main_counter=0;
    while(true)
    {
        deque<int> s;

        auto iter_1  = v.begin();
        auto iter_2 = v.begin();
        iter_2++;
        for(;iter_2!=v.end();iter_2++)
        {
            //cout<<*iter_2<<" "<<*iter_1<<endl;
            if(*iter_2 > *iter_1)
            {
                
                s.push_back(iter_2-v.begin());
            }
            iter_1++;
        }

        if(s.size()==0) break;

        else 
        {
            sort(s.begin(),s.end());
            int counter=0;
            while(!s.empty())
            {
                int index = s.front();
                s.pop_front();

                auto iter_3 = v.begin();
                advance(iter_3,index-counter);
                counter++;
                v.erase(iter_3);
            }

   //         for(int i=0;i<v.size();i++)
//            cout<<v[i]<<" ";
 //           cout<<endl;

        }
        main_counter++;

        

    }
    cout<<main_counter<<endl;

return 0;
}
