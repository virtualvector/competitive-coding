#include<iostream>
#include<cstdlib>
#include<cstdio>

typedef struct node {

    int data;
    struct node* left;
    struct node* right;


}Node;

Node* insert(Node* root,int data)
{
    if(root==NULL)
    {
        root = (struct node*)malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;

    }

    else if(data>root->data) root->right=insert(root->right,data);
    else if(data<root->data) root->left=insert(root->left,data);
    /*

    Node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left= NULL;
    new_node->right = NULL;

    Node* temp = root;

    while(root->next!=NULL)
    {
        
        
        if(root->data < data) root=root->right;
        else if(root->data > data) root=root->left;

    }
    root->next = new_node;
*/
}

void iterative_insert(Node* root,int data)
{
    while(root)
    {
        if(data> root->data)
        {
            if(root->right == NULL)
            {
                root->right = new Node;
                root->right->data = data;
                root->right->left = NULL;
                root->right->right= NULL;
                break;
            }
            else root=root->right;

        }
        else if(data< root->data)
        {

            if(root->left == NULL)
            {

                Node* new_node = new Node;
                new_node->data=data;
                new_node->left = NULL;
                new_node->right = NULL;
                root->left = new_node;

                break;
            }
            else root=root->left;


        }



    }



}

void display(Node* root)
{
    if(root)
    {
        display(root->left);
        printf("%d\t",root->data);
        display(root->right);


    }


}

int max(int a,int b)
{
    return a>b?a:b;

}

int find_height(Node* root)
{   

    if(root==NULL) return 0;
    return max(find_height(root->left),find_height(root->right))+1;



}




using namespace std;

int main()
{

    int n;
    cin>>n;
    Node* root=NULL;
    while(n--)
    {
        int val;
        cin>>val;
        root=insert(root,val);


    }

//    display(root);
    cout<<find_height(root)<<endl;


return 0;
}
