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

    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        cout<<max(a,b)<<" "<<a+b<<endl;

    }


return 0;
}

