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

node* sortedMerge(node* &head1, node* &head2){

    // When one list is empty
    if(head1->next == NULL){
        head1->next = head2;
        return head1;
    }

    // If not empty
    node* curr1 = head1;
    node* next1 = curr1->next;
    node* curr2 = head2;
    node* next2 = curr2->next;

    while(next1 != NULL && curr2 != NULL){
        if((curr2->data >= curr1->data) && (curr2->data <= next1->data)){
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        }
        else{
            curr1 = next1;
            next1 = next1->next;

            if(next1 == NULL){
                curr1->next = curr2;
                return head1;
            }
        }
    }
    return head1;
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

    node* mergedList;

    if(a->data >= b->data){
        mergedList = sortedMerge(b, a);
    }
    else{
        mergedList = sortedMerge(a, b);
    }
    cout<<"\nSorted List: "<<endl;
    printLL(mergedList);

    return 0;
}