#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include "binary_tree.h"
#include<unordered_map>

using namespace std;

void vertical_order(Node* root,int dist, unordered_map<int, vector< Node* > >& um)
{

if(root==NULL) return;
    um[dist].push_back(root);

    vertical_order(root->left,dist-1,um);
    vertical_order(root->right,dist+1,um);


}

int main()
{
    Node* root= new_node(10);
    root->left = new_node(20);
    root->right = new_node(30);
    root->left->left = new_node(40);
    root->right->right = new_node(50);
    root->left->right = new_node(60);
    root->right->left = new_node(70);
    cout<<endl;
    unordered_map<int, vector< Node* > > um;
    vertical_order(root,0,um);

    auto iter = um.begin();

    for(;iter!=um.end();iter++)
    {
        vector< Node* > v = iter->second;

        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]->data<<" ";
        }
        cout<<endl;

    }

return 0;
}
