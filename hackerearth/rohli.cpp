#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;

bool isanagram(string s1,string s2)
{
    
        for(int i=0;i<s1.size();i++)
        {
            if(count(s1.begin(),s1.end(),s1[i])!=count(s2.begin(),s2.end(),s1[i]))
            return false;


        }

        for(int i=0;i<s2.size();i++)
        {
            if(count(s2.begin(),s2.end(),s2[i])!=count(s1.begin(),s1.end(),s2[i]))
            return false;


        }

return true;

}

int main()
{

        int n;
        cin>>n;
        unordered_map<string,int> um;
        while(n--)
        {
            string s;
            cin>>s;

            if(um.size()==0) um[s]=1;
            else
            {
            bool boolval = false;

                unordered_map<string,int>::iterator iter;
                for(iter=um.begin();iter!=um.end();iter++)
                {
                    if(iter->first[0]==s[0] && iter->first[(iter->first.size())-1]==s[s.size()-1]
                    && isanagram(s,iter->first))
                    {
                            iter->second = iter->second+1;
                            boolval=true;

                    }


                }

                if(boolval==false) um[s]=1;


            }




        }
        int counter=0;

        for(auto& x:um)
        {
            counter++;
        }
        cout<<counter<<endl;


return 0;

}
