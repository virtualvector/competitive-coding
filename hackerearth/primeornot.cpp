#include<iostream>
#include<stack>
#include<deque>

using namespace std;

bool check_prime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0) return false;

    }
    return true;



}

int main()
{
    int n;
    cin>>n;
    stack<int> s;
    deque<int> q;
    while(n--)
    {
        int num;
        cin>>num;
        if(check_prime(num)) q.push_back(num);
        else s.push(num);


    }

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop_front();

    }
    cout<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();

    }



return 0;
}
