#pragma warning(disable:4786)
#include<iostream>
#include<unordered_map>
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

void map_returner(string s1,unordered_map<char,int>* um){


for(int i=0;i<s1.length();i++){
    if((*um).find(s1[i])!=(*um).end()){
            auto iter = um->find(s1[i]);
            (*iter).second +=1; 
    }
    else if(s1[i]!=' ') (*um)[s1[i]]=1;
}


}

void map_printer( unordered_map<char,int> um){


unordered_map<char,int>::iterator iter;

for(iter=um.begin();iter!=um.end();iter++){
    
    cout<<(*iter).first<< " "<<(*iter).second<<endl;

}

}


int main()
{

ios_base::sync_with_stdio(0);
string s1,s2;
getline(cin,s1);
getline(cin,s2);
cout<<s1<<endl<<s2;



unordered_map<char,int> um;
unordered_map<char,int> um2;

map_returner(s1,&um);
map_returner(s2,&um2);

cout<<endl<<"map1"<<endl;
map_printer(um);
cout<<endl<<"map2"<<endl;
map_printer(um2);

cout<<"are they same?"<<endl;

int counter1=0;
int counter2 =0;
bool value = true;

for(auto& x: um){
   counter1+= x.second; 
   auto my_iter = um2.find(x.first);
   if(my_iter == um2.end() ||  (um2.find(x.first))->second != x.second){
        value = false;
        break;
   }

}

for(auto& x: um2){
   counter2+= x.second; 

}

cout<<counter1<<" "<<counter2<<endl;
cout<<value;




return 0;
}

