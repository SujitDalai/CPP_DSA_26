#include<iostream>
#include<queue>
using namespace std;

// Creation of BST
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

// ********* Insert elements into BST ***********
node* insertIntoBST(node* &root, int d){
    //base case
    if(root==NULL){
        root = new node(d);
        return root;
    }
    if(d > root->data){
        root->right = insertIntoBST(root->right,d);
    }
    else{
        root->left = insertIntoBST(root->left,d);
    }
    return root;
}

void takeInput(node* &root){
    int data; 
    cin>>data;

    while(data != -1){
        insertIntoBST(root, data);
        cin>>data;
    }
}

// ******************* Traversals ********************
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

// ************** Search a element in BST ****************
void searchInBST(node* root, int x) {
    node* temp = root;
    cout<<"\nEnter the element to search for : ";
    cin>>x;
     while(temp != NULL){
         if(temp->data == x){
             cout<<"Yes it is present.";
         }
         if(temp->data > x){
             temp = temp->left;
         }else{
             temp = temp->right;
         }
     }
     cout<<"Not Present";
}

// Find minimum node in BST
node* minVal(node* root){
    node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

// Find maximum node in BST
node* maxVal(node* root){
    node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

// ***************** Deletion of node from BST ******************
node* deletefromBST(node* root, int val){
    // base case
    if(root == NULL)
    return root;

    if(root->data == val) {
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // *** 1 child ***
        // left child
        if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if(root->left == NULL && root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deletefromBST(root->right, mini);
            return root;
        }
    }
    else if(root->data > val) { 
        // moving to left part
        root->left = deletefromBST(root->left, val);
        return root;
    }else{
        // moving to right part
        root->right = deletefromBST(root->right, val);
        return root;

    }
}

int main(){
    node* root = NULL;
    int x;

    cout<<"Enter data to create BST : "<<endl;
    takeInput(root);

    cout<<"Printing the BST (Level Order) : "<<endl;
    levelOrderTraversal(root);

    cout<<"\nPrinting InOrder : "<<endl;
    inOrder(root);
    cout<<"\nPrinting PreOrder : "<<endl;
    preOrder(root);
    cout<<"\nPrinting PostOrder : "<<endl;
    postOrder(root);

    searchInBST(root, x);
    cout<<"\nMinimum value in BST: "<<minVal(root)->data;
    cout<<"\nMaximum value in BST: "<<maxVal(root)->data;

    // DELETION OF NODE
    root = deletefromBST(root, 50);

    cout<<"\nPrinting the BST (Level Order) : "<<endl;
    levelOrderTraversal(root);

    cout<<"\nPrinting InOrder : "<<endl;
    inOrder(root);
    cout<<"\nPrinting PreOrder : "<<endl;
    preOrder(root);
    cout<<"\nPrinting PostOrder : "<<endl;
    postOrder(root);

    searchInBST(root, x);
    cout<<"\nMinimum value in BST: "<<minVal(root)->data;
    cout<<"\nMaximum value in BST: "<<maxVal(root)->data;

}