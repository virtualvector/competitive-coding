#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i=0;i<v.size();i++)cin>>v[i];


        while(m--)
        {

            bool flag = false;
            for(int i=0;i<v.size();i++)
            {
                if(i==0)
                {
                    if(v[i]==0 && v[i+1]==1)
                    {
                            v[i]=1;
                            flag=true;


                    }
                    else if(v[i]==1 && v[i+1]==0)
                    {
                            v[i]=0;
                            flag=true;

                    }
                }
                else if(i==v.size()-1)
                {
                    if(flag==true )
                    {
                    cout<<"first"<<endl;
                        if(v[i-1]==1) v[i]=0;
                        else v[i]=1;

                    }
                    else
                    {
                    cout<<"second"<<endl;
                        if(v[i-1]==1) v[i]=1;
                        else v[i]=0;

                    }


                }

                else
                {

                    if(v[i]==0 && (v[i+1]==1) && (v[i-1]==1 && !flag) )
                    {
                        v[i]=1;
                        flag=true;
                    }
                    
                    else if(v[i]==1 && (v[i+1]==1) && (v[i-1]==1 && !flag) )
                    {
                        v[i]=1;
                        flag = false;

                    }

                    else if(v[i]==0 && v[i+1]==1 && (v[i-1]==0 && flag) )
                    {
                        v[i]=1;
                        flag=true;

                    }
                    else if(v[i]==1 && v[i+1]==1 && (v[i-1]==0 && flag))
                    {
                        v[i]=1;
                        flag=false;

                    }
                    {
                        if(v[i]==0) flag = false;
                        else
                             {
                                v[i]=0;
                                flag=true;
                            }
                    }

                }

            }


        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";

        }
        cout<<endl;


    }



return 0;
}
