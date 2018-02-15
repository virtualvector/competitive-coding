#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>

using namespace std;

void replace_all(string& s1,int pos)
{
    int ind;
    for(ind=s1.find("->");(ind!=string::npos && ind<pos);ind =s1.find("->",ind++),pos--)
    {
        if(ind>=pos)break;
        s1.replace(ind,2,".");
    }

}

int main()
{
    string s;
   bool flag =false; 

    while(!cin.eof())
    {
    getline(cin,s);

    if(flag==false)
    {
        size_t pos = s.find("//");
        size_t pos2 = s.find("/*"); 

        if(pos==string::npos && pos2==string::npos) replace_all(s,s.length()-1);
        else if(pos2!=string::npos && pos!=string::npos)
        {

            if(pos<pos2) 
            {

            cout<<"both"<<endl;
            replace_all(s,pos);flag = true;
            }
            else
            {
            replace_all(s,pos2);flag=true;    

            }
        }
        else if(pos!=string::npos)
        {
            replace_all(s,pos);

        }
        else {
            replace_all(s,pos2);flag=true;

        }

        

    cout<<s<<endl;;

    }
    else if(flag == true)
    {
        cout<<s<<endl;
        if(s.find("*/")!=string::npos)
        {
         
        flag=false;

        }

    }


    }
    



return 0;
}
