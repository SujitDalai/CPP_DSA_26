#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void travrseLL(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insertAtHead(node* &head, int d){
    node* newN = new node(d);
    newN->next = head;
    head = newN;
}

void insertAtTail(node* &tail, int d){
    node* newN = new node(d);
    tail->next  = newN;
    tail = newN;
}

void insertAtMiddle(node* &head, int pos, int d){
    node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp= temp->next;
        cnt++;
    }
    node* newN = new node(d);
    newN->next = temp->next;
    temp->next = newN;
}

void deleteNode(node* &head, node* &tail, int pos){
    if(pos == 1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;

        while(cnt < pos-1){
            prev = curr;
            curr = curr-> next;
            cnt++;
        }
        prev->next = curr->next;

        // Check if the last node is being deleted
        if(curr == tail){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
    
}

// ****************************           Reverse a Linked List              ********************************
void reverseLL(node* &head){
    node* curr = head;
    node* prev = NULL;
    node* next = NULL;

    while(curr != NULL){
        // store the next 
        next = curr->next;
        // Reverse the node pointer
        curr->next = prev;
        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }
    head = prev;
}

// ****************************         Middle Element a Linked List          ********************************

// Approach 1: (Find mid and return)
// void middleofLL(node* &head){
//     node* temp = head;
//     int cnt = 1;
//     while(temp != NULL){
//         temp = temp->next;
//         cnt++;
//     }

//     int mid = cnt/2; 
//     temp = head; // reset temp to head
//     for(int i = 0; i < mid; i++){
//         temp = temp->next;
//     }
//     cout<<temp->data<<endl;
// }

// Approach 2 (Two pointer Approach)
void middleofLL(node* &head){
    node* slowptr = head;
    node* fastptr = head;

    if(head != NULL){
        while(fastptr != NULL && fastptr->next != NULL){
            fastptr = fastptr->next->next;
            slowptr = slowptr->next;
        }
        cout<<slowptr->data;
    }
}


// ****************************         Remove Duplicate(Sorted LL)          ********************************

void removeDuplicateSorted(node* &head){
    node*curr = head;
    node* next_next;
    while(curr != NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            next_next = curr->next->next;
            delete curr->next;
            curr->next = next_next;
        }else{
            curr = curr->next;
        }
    }
}

// ****************************         Remove Duplicate(Unsorted LL)          ********************************

void removeDuplicateUnsorted(node* &head){
    node *p1 = head;
    node *p2,*dup;

    while(p1 != NULL && p1->next != NULL){
        p2 = p1;
        while (p2->next != NULL)
        {
            if (p1->data == p2->next->data)
            {
                dup = p2->next;
                p2->next = p2->next->next;
                delete (dup);
            }
            else
                p2 = p2->next;
        }
        p1 = p1->next;
    }
}


int main(){
    node * node1 = new node(12);
    node* head = node1;
    travrseLL(head);

    insertAtHead(head, 10);
    insertAtHead(head, 8);
    insertAtHead(head, 8);
    cout<< "\nAfter doing Insertion at Head: "<<endl;
    travrseLL(head);

    node*tail = node1;
    insertAtTail(tail, 20);
    insertAtTail(tail, 24);
    cout<< "\nAfter doing Insertion at Tail: "<<endl;
    travrseLL(head);

    insertAtMiddle(head, 4, 14);
    insertAtMiddle(head, 5, 16);
    insertAtMiddle(head, 7, 22);
    cout<< "\nAfter doing Insertion at Middle: "<<endl;
    travrseLL(head);

    cout<< "\nMiddle Element: "<<endl;
    middleofLL(head);

    reverseLL(head);
    cout<< "\nAfter doing Reverse: "<<endl;
    travrseLL(head);

    // removeDuplicateSorted(head);
    // cout<< "\nAfter removing duplicate: "<<endl;
    // travrseLL(head);

    removeDuplicateUnsorted(head);
    cout<< "\nAfter removing duplicate: "<<endl;
    travrseLL(head);


    deleteNode(head, tail, 1);
    deleteNode(head, tail, 8);
    deleteNode(head, tail, 3);
    cout<< "\nAfter doing Deletion: "<<endl;
    travrseLL(head);


    return 0;
}