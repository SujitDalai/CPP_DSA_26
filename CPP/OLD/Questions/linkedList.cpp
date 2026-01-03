#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;   // declares a pointer next of type (Node*) which points to the next node

    Node(int data){   // constructor for initialization
        this->data = data;
        this->next = NULL;
    }
};

//traversing linked list
void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

//insertion at head
void insertionAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insertion at tail
void insertionAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next  = temp;
    tail = temp;
}

// insertion at middle 
void insertionAtMiddle(Node* &head, Node* &tail, int pos, int d){
    Node* temp = head;
    int ctr = 1;
    while(ctr < pos - 1){
        temp = temp->next;
        ctr++;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// delete node in linked list
void deleteNode(Node* &head, int pos){
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// ******************************** Sort 0, 1 and 2 **************************************

void sort012(Node* head){
    int count[3] = {0,0,0};
    Node *ptr = head;

// count the number of 0,1 and 2
    while(ptr != NULL){
        count[ptr->data] += 1;
        ptr = ptr->next;
    }

// replacing 0, 1 and 2 according to their count
    ptr = head;
    int i = 0;
    while(ptr != NULL){
        if(count[i] == 0){
            ++i;
        }
        else{
            ptr->data = i;
            --count[i];
            ptr = ptr->next;
        }
    }
}

// main function
int main(){
    Node* node1 = new Node(2);

    Node* head = node1;

    printLL(head);
    insertionAtHead(head, 1);
    insertionAtHead(head, 1);
    insertionAtHead(head, 0);
    cout<<"\nAfter head insertion: "<<endl;
    printLL(head);

    Node* tail = node1;

    insertionAtTail(tail, 2);
    insertionAtTail(tail, 1);
    cout<<"\nAfter tail insertion: "<<endl;
    printLL(head);
    
    insertionAtMiddle(head, tail, 5, 0);
    insertionAtMiddle(head, tail, 7, 0);
    cout<<"\nAfter middle elements insertion: "<<endl;
    printLL(head);

    deleteNode(head,2);
    deleteNode(head,6);
    cout<<"\nAfter deletion: "<<endl;
    printLL(head);

    sort012(head);
    cout<<"\nAfter sort 0, 1 & 2: "<<endl;
    printLL(head);

    return 0;
}