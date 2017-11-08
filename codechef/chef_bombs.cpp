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



#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(a) memset(a, 0, sizeof(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(X) ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X) ( (X) * (X) )
#define SZ(V) (int )V.size()
#define FORN(i, n) for(i = 0; i < n; i++)
#define FORAB(i, a, b) for(i = a; i <= b; i++)
#define ALL(V) V.begin(), V.end()
#define IN(A, B, C)  (B) <= (A) && (A) <= (C)


typedef pair<int,int> PII;
typedef pair<double, double> PDD;
typedef vector<int> VI;

#define AIN(A, B, C) assert(IN(A, B, C))

//typedef int LL;
//typedef long long int LL;
//typedef __int64 LL;

int main()
{

ios_base::sync_with_stdio(0);
int test;
cin>>test;
while(test--){

    long long arr_size;
    cin>>arr_size;
    long long int array[arr_size];
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.size();i++){
            array[i]=s[i]-'0';
    }

    if(array[0]==1 && array[1]!=1) array[1]=-1;
    if(array[arr_size-1]==1 && array[arr_size-2]!=1 ) array[arr_size-2]=-1;

    for(i=1;i<arr_size-1;i++){
        if(array[i]==1 && array[i+1]!=1){
            array[i+1]=-1;

        }
        if(array[i]==1 && array[i-1]!=1){

            array[i-1]=-1;
        }

    }

    int counter=0;
    for(int i=0;i<arr_size;i++){
            if(array[i]==0) counter++;

    }
    cout<<counter<<endl;



}



return 0;
}

