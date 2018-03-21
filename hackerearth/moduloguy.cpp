#include<iostream>
#include<cstdio>
#define ll long long 
using namespace std;

ll digit_sum(ll a)
{
ll sumval=0;

while(a!=0)
{
    sumval+=a%10;
    a = a/10;


}
return sumval;


}


int main()
{
    
    ll a,b,c;
    cin>>a>>b>>c;

    ll sum1 = digit_sum(a);
    ll sum2 = digit_sum(b);
    sum1 = sum1%c;
    sum2 = sum2%c;
    cout<<sum1<<" "<<sum2<<endl;
    cout<<(sum2-sum1)%c<<endl;






return 0;
}
