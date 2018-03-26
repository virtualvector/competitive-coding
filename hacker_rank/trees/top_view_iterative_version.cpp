#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include "binary_tree.h"
#include<deque>
#include<unordered_map>
#include<unordered_set>
#include<utility>

using namespace std;

void top_view(Node* root)
{
    
    unordered_set<int> us;
    deque< pair<int,Node*> >dq;
    dq.push_back(pair<int,Node*>(0,root));

    while(!dq.empty())
    {
        pair<int,Node*> p = dq.front();
        dq.pop_front();
        Node* my_node = p.second;
        int level  = p.first;

        if(us.find(level)==us.end())
        {
            cout<<my_node->data<<endl;
            us.insert(level);

        }

        if(my_node->left) dq.push_back(pair<int,Node*>(level-1,my_node->left));
        if(my_node->right)
        dq.push_back(pair<int,Node*>(level+1,my_node->right));



    }


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
    top_view(root);

return 0;
}
