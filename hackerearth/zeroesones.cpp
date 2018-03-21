#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int q;
    cin>>q;

    vector<int> v(n,1);

    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(a==0) 
        {

            v[b-1]=0;

        }

        if(a==1)
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==1) b--;
                if(b==0) 
                {
                if(i+1==-1) cout<<1<<endl;
                else{
                    cout<<i+1<<endl;
                    break;
                    }

                }
               // cout<<b<<"value"<<endl;

            }
            if(b>0)cout<<1<<endl;



        }


    }



return 0;
}
