#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }

    auto iter = v.begin();
    auto iter2=v.begin();
    advance(iter2,k);

    do
    {
        cout<<(*std::max_element(iter,iter2))<<" ";
        iter++;iter2++;

    }

    while(iter2!=v.end());

        cout<<(*std::max_element(iter,v.end()))<<" ";
    

return 0;

}
