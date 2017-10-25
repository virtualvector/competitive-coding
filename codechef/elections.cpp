#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>

using namespace std;

int main(){

    int f,s,l;
    cin>>f>>s>>l;
    unordered_map<int,int> um;

    for(int i=0;i<f+s+l;i++){
        
        int val;
        cin>>val;
        um[val]+=1;

    }
    vector<int> finalvector;
    unordered_map<int,int>::iterator iter;
    for(iter=um.begin();iter!=um.end();iter++){
        //cout<<(iter->first)<<" "<<(iter->second)<<endl;
        if((iter->second)>=2)
        finalvector.push_back(iter->first);

    }
    sort(finalvector.begin(),finalvector.end());
    cout<<finalvector.size()<<endl;
    for(int i=0;i<finalvector.size();i++){

        cout<<finalvector[i]<<endl;
    }


return 0;
}
