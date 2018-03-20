#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    string s = "hello dear friends";
    char* dummy = strdup(s.c_str());
    char* tok = strtok(dummy," ");

    while(tok!=NULL)
    {
        cout<<string(tok)<<endl;
        tok = strtok(NULL," ");

    }





return 0;
}
