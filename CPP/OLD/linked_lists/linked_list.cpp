#include<iostream>
using namespace std;

class Node {
    public:
    int data;       // data -- to store value of node
    Node* next;     // declares a pointer next of type (Node*) which points to the next node

    //constructor of Node class
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next =NULL;
        }
        cout<<"memory is free for data : "<< value << endl;
    }
};

// Insertion At Head
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;  
}

// Insertion at Tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

// Insertion at Middle/ Any position
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
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

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp ->next;
    temp -> next = nodeToInsert;
}

// Print the linked list
void printLinkedList(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// Deleting node 
void deleteNode(int position, Node* &head){
    //deleting first node
     if(position == 1){
        Node* temp = head;
        head = head ->next;
        temp -> next = NULL;
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
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
     }
}

int main(){

    //creating new node
    Node* node1 = new Node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    Node* head = node1;
    // printLinkedList(head);
    // insertAtHead(head, 12);
    // printLinkedList(head);
    // insertAtHead(head, 15);
    // printLinkedList(head);

    Node* tail = node1;
    printLinkedList(head);
    insertAtTail(tail, 12);
    printLinkedList(head);
    insertAtTail(tail, 16);
    printLinkedList(head);

    insertAtPosition(tail, head, 3, 14);
    printLinkedList(head);

    // insertAtPosition(tail, head, 1, 8);
    // printLinkedList(head);

    deleteNode(2, head);
    printLinkedList(head);

    return 0;
}