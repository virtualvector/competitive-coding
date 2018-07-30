#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

string s="hello";
char * str = const_cast<char*>(s.c_str());
string s2(str);
cout<<s2<<endl;

}
