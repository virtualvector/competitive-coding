#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        unordered_set<int> us;
        for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v[i]=x;
        us.insert(x);
        }

        int minele = *std::min_element(v.begin(),v.end());
        int maxele = *std::max_element(v.begin(),v.end());
        int mysum=0;
        cout<<minele<<" "<<maxele<<endl;
        for(int i=minele;i<=maxele;i++)
        {
            mysum+=i;

        }
        int vecsum = accumulate(v.begin(),v.end(),0);
        cout<<mysum-vecsum<<endl;


    }


return 0;
}
