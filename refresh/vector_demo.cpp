#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v(20);
    v.push_back(20);
    
    vector<int>::reverse_iterator iter;
    iter = v.rbegin();

    for(iter;iter!=v.rend();iter++)
    {
       cout<<(*iter)<<" "; 
    }


return 0;
}
