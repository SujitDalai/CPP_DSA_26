// ***************************  Check palindrome in Linked List  ********************************
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

bool checkPalindrome(node* head){
    // For empty or single element
    if(head == NULL && head->next == NULL){
        cout<<"This is a palindrome."<<endl;
        return true;
    }
    // get the middle element
    node* mid = getMiddleElement(head);

    // reverse the list (middle to last)
    // node* temp = mid->next;
    // mid->next = reverseLL(temp);
    node* reverseSecondHalf = reverseLL(mid->next);

    // compare both parts
    node* head1 = head;
    node* head2 = reverseSecondHalf;

    while(head1 != NULL && head2 != NULL){
        if(head1->data != head2->data){
            cout<<"This is not a palindrome."<<endl;
            return false;
        }
            head1 = head1->next;
            head2 = head2->next;

        // node* temp = mid->next;
        // mid->next = reverseLL(temp);
        // node* reverseSecondHalf = reverseLL(mid->next);
    }
    cout<<"This is a palindrome."<<endl;
    return true;
}

node* getMiddleElement(node* &head){
    node *slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node* reverseLL(node* &head){
    node* curr = head;
    node* next = NULL;
    node* prev = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    node* node1 = new node(1);
    node1->next = new node(2);
    node1->next->next = new node(3);
    node1->next->next->next = new node(3);
    node1->next->next->next->next = new node(2);
    node1->next->next->next->next->next = new node(1);

    node* head = node1;

    checkPalindrome(head);

    return 0;
}