#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    int maxi=0;
    for(int i=0;i<s.size();i++)
    {
        int counterval=0;
        int j=i;
        while(s[j]==s[i]) j++;
        counterval = j-i;
        if(counterval>maxi) maxi = counterval;

        i=j-1;



    }
    cout<<maxi<<endl;


}
