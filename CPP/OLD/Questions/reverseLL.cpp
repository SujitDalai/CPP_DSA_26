#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// reverse linked list
void reverseLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    if(head == NULL || head->next == NULL){
        cout<<head->data<<endl;
    }
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}

// traversing linked list
void traverseLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

// insertion at head
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insertion at tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// insertion at middle 
void insertAtMiddle(Node* &head, Node* &tail, int pos, int d){
    Node* temp = head;
    int ctr = 1;
    while(ctr < pos-1){
        temp = temp->next;
        ctr++;
    }
    Node* newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}

// delete a node
void deleteNode(Node* &head, int pos){
    //delete head node 
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }else{
        //delete middle/last node 
        Node* prev = NULL;
        Node* curr = head;
        int ctr = 1;
        while(ctr < pos-1){
            prev = curr;
            curr = curr->next;
            ctr++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
} 


int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    traverseLL(head);

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    insertAtHead(head, 60);
    cout<<"After head insertion: "<<endl;
    traverseLL(head);


// reversing linked list
    reverseLL(head);
    cout<<"\n After reversing the linked list: "<<endl;
    traverseLL(head);

    return 0;
}