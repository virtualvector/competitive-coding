#include<iostream>
#include<string>

using namespace std;
int main()
{

    int test;
    cin>>test;

    while(test--)
    {
   
        int dummy;
        cin>>dummy;


        string s;
        cin>>s;
        string s2;
        char val;
        bool flag = true;

        for(int i=0;i<s.length();i++)
        {
            switch(s[i])
            {
                case 'A': val = 'T';break;
                case 'T': val = 'A';break;
                case 'C':val = 'G';break;
                case 'G':val = 'C';break;
                default: val='X';break;



            }

            if(val=='X')
            {cout<<"Error RNA nucleobases found!"<<endl;
            flag = false;
            break;
            }
            else            s2.push_back(val);


        }
        if(flag )cout<<s2;
        cout<<endl;

    }


return 0;
}
