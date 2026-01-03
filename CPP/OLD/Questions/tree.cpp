#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Creation of a binary tree
node* createBT(node* root){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data for the left of "<< data <<endl;
    root->left = createBT(root->left);
    cout<<"Enter the data for the right of "<< data <<endl;
    root->right = createBT(root->right);

    return root;
}

// Level Order Traversal (Breadth First Search)
void levelOrder(node* root){
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
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

//Reverse Level Order Traversal
// put the nodes to the queue and then into the stack and print it
void revLevelOrder(node* root){
    queue<node*> q;
    stack<node*> s;
    q.push(root);

    while(!q.empty()){
        root = q.front();
        q.pop();
        s.push(root);
        if(root->left){
            q.push(root->left);
        }
        if(root->right){
            q.push(root->right);
        }
    }
    while(!s.empty()){
            root = s.top();
            cout<<root->data<<" ";
            s.pop();
        }
}

// Preorder Traversal (Node - Left - Right)
void preOrder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Postorder Traversal (Left - Right - Node)
void postOrder(node* root){
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

// inorder Traversal (Left - Right - Node)
void inOrder(node* root){
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main(){
    node* root = NULL;
    root = createBT(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"Level Order Traversal: "<< endl;
    levelOrder(root);

    cout<<"Reverse Level Order Traversal: "<< endl;
    revLevelOrder(root);

    cout<<"\nPreorder Traversal: "<< endl;
    preOrder(root);

    cout<<"\nPostorder Traversal: "<< endl;
    postOrder(root);

    cout<<"\ninorder Traversal: "<< endl;
    inOrder(root);
    
    return 0;
}