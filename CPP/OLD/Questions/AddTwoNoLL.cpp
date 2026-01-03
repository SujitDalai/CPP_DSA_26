#include <iostream>
using namespace std;

class node{
    public:
    node* next;
    int data;

    node(int d){
        this->next = NULL;
        this->data = d;
    }
};

node* reverseLL(node* &head){
    node* curr = head;
    node* prev = NULL;
    node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void addTwoNosLL(node* &head){
    
}



void printLL(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node* a = new node(10);
    a->next = new node(20);
    a->next->next = new node(30);

    node* b = new node(5);
    b->next = new node(15);
    b->next->next = new node(25);

    cout<<"Linked List 1: "<<endl;
    printLL(a);
    cout<<"\nLinked List 2: "<<endl;
    printLL(b);


    return 0;
}