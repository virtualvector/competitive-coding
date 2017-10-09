#pragma warning(disable:4786)
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<assert.h>
using namespace std;

int main()
{

ios_base::sync_with_stdio(0);
int n;
cin>>n;
int amax=0,bmax=0;
while(n--){

    int a,b;
    cin>>a>>b;
    if(a>b && (a-b)>amax){(amax=a-b);}else{if((b-a)>bmax)bmax=b-a;}

    

}
if(amax>bmax)cout<<1<<" "<<amax;
else cout<<2<<" "<<bmax;



return 0;
}

