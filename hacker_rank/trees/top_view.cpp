#include<iostream>
#include<cstdio>
#include<cstdlib>
#include "binary_tree.h"

using namespace std;

void top_view(Node* root,int max_dist,int current_dist)
{


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
    top_view(root,1,0);
    cout<<endl;
    inorder_traversal(root);

return 0;
}
