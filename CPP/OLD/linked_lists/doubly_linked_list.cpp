#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL; 
    }

    // destructor
    ~Node() {
        int value = this->data;
        // memory free
        if(next != NULL){
            delete next;
            next =NULL;
        }
        cout<<"memory is free for data : "<< value << endl;
    }
};

// Traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}

// Length of a linked list
int getLength(Node* head){
    int len =0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

// Insert node at the start 
void insertAtHead(Node* &head, int d){

    if(head == NULL){
        Node* temp  = new Node(d);
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
    
}

// Insert node at the end/tail 
void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail->next = temp;
    temp -> prev = tail;
    tail = temp;
}

// Insert node at the any position/middle
void insertAtPosition(Node* &tail, Node* & head, int position, int d){
    // insert at start position
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
// insert at end position
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }
//insert at any position
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp->next->prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

// Deleting node 
void deleteNode(int position, Node* &head){
    //deleting first node
     if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp -> next;
        temp ->next = NULL;
        delete temp;
     }
     else{
        // deleting end or middle node 
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
     }
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;


    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 30);
    print(head);

    insertAtTail(tail,0);
    print(head);

    insertAtPosition(tail,head,2,25);
    print(head);

    deleteNode(4 , head);
    print(head);


    return 0;
}