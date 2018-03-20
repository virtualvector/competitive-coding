#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<string>
#include<cstring>
#include<cstdio>

using namespace std;


int main()
{
    int test;
    cin>>test;
    cin.ignore();

    while(test--)
    {

        string s;
        getline(cin,s,'\n');
        vector<int> v;
        char* tok = strtok(const_cast<char*>(s.c_str())," ");

        while(tok!=NULL)
        {
                
            v.push_back(atoi(tok));
            tok = strtok(NULL," ");

        }
           vector<int>::iterator iter;
           bool flag = false;
           for(iter=v.begin();iter!=v.end();iter++)
           {
                int left_sum = accumulate(v.begin(),iter,0);
                vector<int>::iterator iter2;
                iter2=iter;
                int right_sum = accumulate(++iter2,v.end(),0);
  //              cout<<"left sum is "<<left_sum<<" right sum is "<<right_sum<<endl;
                if(left_sum==right_sum)
                {
                    cout<<(iter-v.begin())<<endl;
                    flag = true;

                }


           }

            if(flag==false) cout<<-1<<endl;


//        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
 //       cout<<endl;
    }




return 0;
}
