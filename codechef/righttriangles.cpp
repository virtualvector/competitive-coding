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
int counter=0;
while(test--){
    
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    float val1 = (pow((x1-x2),2)+(pow((y1-y2),2)))

                + (pow((x1-x3),2)+(pow((y1-y3),2)));

    int res1 = (val1== (pow((x2-x3),2)+pow((y2-y3),2)));



    float val2 = (pow((x1-x2),2)+(pow((y1-y2),2)))

                + (pow((x2-x3),2)+(pow((y2-y3),2)));

    int res2 = (val2== (pow((x1-x3),2)+pow((y1-y3),2)));


    
    float val3 = (pow((x1-x3),2)+(pow((y1-y3),2)))

                + (pow((x2-x3),2)+(pow((y2-y3),2)));

    int res3 = (val3== (pow((x1-x2),2)+pow((y1-y2),2)));


    if(res1 || res2 || res3)counter++;




}
cout<<counter<<endl;



return 0;
}

