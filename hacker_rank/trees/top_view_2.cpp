#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include "binary_tree.h"
#include<unordered_map>

using namespace std;

void vertical_order(Node* root,int dist, unordered_map<int, Node* >& um)
{

if(root==NULL) return;

    if(um.find(dist)==um.end())
    {
        um[dist]=root;    

    }

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

    root->right->left->right = new_node(80);
    root->right->left->right->right = new_node(90);
    cout<<endl;
    unordered_map<int, Node* > um;
    vertical_order(root,0,um);

    auto iter = um.begin();

    for(;iter!=um.end();iter++)
    {
        cout<<(iter->second)->data<<endl;

    }

return 0;
}
