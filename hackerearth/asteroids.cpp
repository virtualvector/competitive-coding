#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];


        }
        bool flag = true;
        while(flag)
        {
        if(v.size()==0) break;
        for(int i=0;i<v.size()-1;i++)
        {
        if(v.size()==0) break;
            if(v[i]>0 && v[i+1]<0)
            {
                if(abs(v[i])>abs(v[i+1]))
               { 
                //v[i+1]=0;
                vector<int>::iterator iter=v.begin();
                advance(iter,i+1);
                v.erase(iter);
                i--;

                }
                else if(abs(v[i])<abs(v[i+1])) 
                {
               // v[i] =0;

                vector<int>::iterator iter2=v.begin();
                advance(iter2,i);
                v.erase(iter2);
                i--;
                }
                
                else if(abs(v[i])==abs(v[i+1]))
                {
                    vector<int>::iterator iter3;
                    iter3=v.begin();
                    advance(iter3,i);
                    v.erase(iter3);
                    v.erase(iter3);
                    i=i-2;


                }

                flag = false;

            }

    

        }
            if(flag==false)flag = true;
            else break;

//            cout<<"while running"<<endl;
        }

        if(v.size()==0){
                cout<<"NOTHING"<<endl;
                continue;

        }
        for(int i=0;i<v.size();i++)
        {
                cout<<v[i]<<" ";

        }
    cout<<endl;

    }




return 0;
}
