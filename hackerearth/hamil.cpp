#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++) cin>>v[i];

    auto iter = v.begin();
    
    for(iter;iter!=v.end();iter++)
    {
        auto iter2 = iter;
        int max_elem = *std::max_element(iter2++,v.end());
        if((*iter)>=max_elem)cout<<(*iter)<<" ";
    }

return 0;
}
