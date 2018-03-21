#include<iostream>
#include<cmath>
#include<utility>
#include<algorithm>

using namespace std;

pair<long long int,long long int> nearest_prime_front(long long int n)
{
++n;int k=0;
    while(true)
    {
    bool flag=true;
    
    for(long long int i=2;i<=n/2;i++)
    {

    if(n%i==0) 
    {
        n++;k++;flag=false;break;


    }


    }
    if(flag==true) return pair<long long int,long long int>(n,k);

}



}

pair<long long int,long long int> nearest_prime_back(long long int n)
{

int k=0;
--n;
    while(true && n>1)
    {
    bool flag=true;
    
    for(long long int i=2;i<=n/2;i++)
    {

    if(n%i==0) 
    {
        k++;n--;flag=false;break;


    }


    }
    if(flag==true) return pair<long long int,long long int>(n,k);

}



}










int main()
{
    int test;
    cin>>test;
    while(test--)
    {
   long long  int n;
    cin>>n;
    pair<long long int,long long int> p1 = nearest_prime_front(n);
    pair<long long int,long long int> p2 = nearest_prime_back(n);
    long long int k1 = p1.second;
    long long int k2 = p2.second;

    if(k2<=k1) cout<<(p2.first)<<endl;
    else cout<<(p1.first)<<endl;



    }



return 0;
}
