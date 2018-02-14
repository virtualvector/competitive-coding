#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>


using namespace std;

int main()
{
    
    int n;
    cin>>n;
    vector<int> v(n);    
    stack<int> s;
    for(int i=0;i<n;i++) cin>>v[i];

    auto iter = v.begin();
    advance(iter,v.size()-1);
    
    int max_elem = -1;

    while(iter!=v.begin())
    {
        if(*iter>=max_elem)
        {
            s.push(*iter);
            max_elem = *iter;


        }

            advance(iter,-1);
    

    }

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }


return 0;
}
