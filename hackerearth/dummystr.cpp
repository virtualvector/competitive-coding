

    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        string a;
        cin>>a;
        int Hash[26]={0};
        for(int i=0;i<a.size();i++)
            if(!Hash[a[i]-'a'])
                Hash[a[i]-'a']=1;
        for(int i=0;i<a.size();i++){
            if(Hash[a[i]-'a']){
                cout<<a[i];
                Hash[a[i]-'a']=0;
            }
        }
        cout<<endl;
        return 0;
    }


