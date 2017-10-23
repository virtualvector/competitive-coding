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
    
    int games;
    cin>>games;
    while(games--){
            
            long long int i,n,q;
            cin>>i>>n>>q;
            long long int head_counter=0,tail_counter=0;
            if(i==1){
                if(n%2==0){
                    head_counter=n/2;
                    tail_counter=n/2;
                }
                else{
                    head_counter=n/2;
                    tail_counter=n-(n/2);

                }
                if(q==1)
                    cout<<head_counter<<endl;
                else cout<<tail_counter<<endl;
            }

            else{

                if(n%2==0){

                    head_counter=n/2;
                    tail_counter=n/2;
                }
                else{

                    tail_counter=n/2;
                    head_counter=n-(n/2);
                }


                    if(q==1)
                        cout<<head_counter<<endl;
                    else cout<<tail_counter<<endl;

            }


            }



}


return 0;
}

