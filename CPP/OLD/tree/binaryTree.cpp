#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

// Creating a Binary Tree
node* buildTree(node* root){

    cout<<"Enter the data: "<< endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data for left of "<<data << endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for right "<< data << endl;
    root->right = buildTree(root->right);

    return root;
}

// Level Order Traversal (Bredth First Search)
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();

        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data <<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

// InOrder traversal
void inOrder(node* root){
    // base case
    if(root == NULL){
        return ;
    }
    inOrder(root->left);
    cout<< root->data <<" ";
    inOrder(root->right);
}

//PreOrder Traversal
void preOrder(node* root){
    // base case
    if(root == NULL){
        return ;
    }
    cout<< root->data <<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//PostOrder Traversal
void postOrder(node* root){
    // base case
    if(root == NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<< root->data <<" ";
}

int main(){
    node* root = NULL;
    // creating a tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"Printing the Level Order Traversal of binary tree: "<<endl;
    levelOrderTraversal(root);

    cout<<"InOrder Traversal is: "<<endl;
    inOrder(root);
    cout<<"\nPreOrder Traversal is: "<<endl;
    preOrder(root);
    cout<<"\nPostOrder Traversal is: "<<endl;
    postOrder(root);

    return 0;
}