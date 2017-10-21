#include<iostream>
#include<cstdio>

using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--){

        int m,n,a[1009];
        int chef_counter=0,asst_counter=0;
        int chef[1000],asst[1000];
        for(int i=0;i<1009;i++)a[i]=1;

        cin>>n>>m;
        for(int i=1;i<=m;i++){
            
            int temp;
            cin>>temp;
            a[temp]=0;


        }


        int boolvalue=0;
        
        for(int i=1;i<=n;i+=1){
            
            if(a[i]){
                if(boolvalue==0){
                    chef[chef_counter++]=i;
                    boolvalue=1;

                }
                else if(boolvalue==1){
                    asst[asst_counter++]=i;
                    boolvalue=0;

                }
            }

        }

        if(chef_counter==0){
            cout<<"\n";
        }
        else {

                for(int i=0;i<chef_counter;i++)cout<<chef[i]<<" ";
                cout<<"\n";

        }

        if(asst_counter==0){

            cout<<"\n";
        }
        else{
                for(int i=0;i<asst_counter;i++)cout<<asst[i]<<" ";
                cout<<"\n";

        }


    }

return  0;
}
