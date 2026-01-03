#include<iostream>
#include<stack>
using namespace std;

// Implementing stack using Linked list
class Node{
    //properties
    public:
    int data;
    Node* next;
    //constructor
    Node(int n){
        this->data = n;
        this->next = NULL;
    }
};

class Stack {
    Node* top;
public:
    Stack(){
        top = NULL;
    }
    
    void push(int data){
        Node* temp = new Node(data);

        if(!temp) {
            cout<<"\n Stack Overflow";
            exit(1);
        }
        temp->data = data;
        temp->next = top;
        top = temp;

    }

    void pop(){
        Node* temp;

        if(top == NULL){
            cout<<"\nStack underflow";
            exit(1);
        }else{
            //assign temp to top
            temp = top;
            //assign second node to top
            top = top->next;
            //delete the node
            free(temp);
        }
    }

    void display(){
        Node* temp;

        if(top == NULL){
            cout<<"\nStack underflow";
            exit(1);
        }else{
            temp = top;
            while(temp != NULL){
                cout<<temp->data;
                temp = temp->next;
                if(temp != NULL)
                cout<<" -> ";
            }
        }
    }

    bool isEmpty(){
        return top == NULL;
    }

    int peek(){
        if(!isEmpty())
        return top->data;
        else
        exit(1);
    }
};

int main(){

    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
 
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;
 
    // Delete top elements of stack
    s.pop();
    s.pop();
 
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;

    return 0;
}