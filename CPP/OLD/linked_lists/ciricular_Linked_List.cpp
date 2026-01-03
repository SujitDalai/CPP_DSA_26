#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for data : " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// Deleting node
void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << " List is empty " << endl;
    }
    else
    {
        // deleting end or middle node
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // single node linked list
        if (curr == prev)
        {
            tail = NULL;
        }
        //>2 linked list
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

// //Dectect and Remove loops in a linked list
// Node *floydDetectLoop(Node *tail)
// {
//     if (tail == NULL)
//         return NULL;

//     Node *slow = tail;
//     Node *fast = tail;

//     while (slow != NULL && fast != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//         }
//         slow = slow->next;

//         if (slow == fast)
//         {
//             cout<<" Present at  " << slow->data <<endl;
//             return slow;
//         }
//     }
//     return NULL;
// }

// Node* getStartingNode(Node* tail){
//     if(tail == NULL){
//         return NULL;
//     }

//     Node* intersection = floydDetectLoop(tail);
//     Node* slow = tail;

//     while(slow != intersection) {
//         slow = slow->next;
//         intersection = intersection-> next;
//     }
//     return slow;    
// }

// void removeLoop(Node* tail){

//     if(tail == NULL)
//         return;

//     Node* startOfLoop = getStartingNode(tail);
//     Node* temp = startOfLoop;

//     while(temp->next != startOfLoop){
//         temp = temp->next;
//     }
//     temp ->next = NULL;
// }

int main()
{

    Node *tail = NULL;

    // empty list insertion
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);

    deleteNode(tail, 5);
    print(tail);
    // Dectect and remove loop in linked list
    // if(floydDetectLoop(tail) != NULL) {
    //     cout<<"Cycle is present"<<endl;
    // }else{
    //     cout<<"No cycle"<<endl;
    // }

    // Node* loop = getStartingNode(tail);
    // cout<< "Loop starts at : "<<loop->data<< endl;

    // removeLoop(tail);
    // print(tail);


    return 0;
}