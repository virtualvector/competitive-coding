#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    auto iter = v.begin();
    auto iter2 =v.begin();
    advance(iter2,k-1);
    int maxi = *std::max_element(v.begin(),v.begin()+k);
    int dum_k = k;
    while(iter2!=v.end())
    {
        if(*iter2>=maxi)
        {
            maxi = *iter2;
            cout<<maxi<<" ";
        }
        else cout<<maxi<<" ";

        iter++;iter2++;


    }


return 0;
}
