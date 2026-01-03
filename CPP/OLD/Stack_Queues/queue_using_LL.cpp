#include <iostream>
#include <queue>
using namespace std;

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

class Queue{
    Node* front;
    Node* rear;
public:    
Queue(){
    this->front = NULL;
    this->rear = NULL;
}
    /*----------------- Public Functions of Queue -----------------*/

    void enqueue(int data) {
        // Implement the enqueue() function
        Node* temp = new Node(data);

        if(rear == NULL){
            front = rear = temp;
            return ;
        }else{
            rear->next = temp;
            rear = temp;
        }
    }

    void dequeue() {
        // Implement the dequeue() function
        if(front == NULL){
            return ;
        }else{
            Node* temp;
            temp = front;
            front = front->next;

            if(front == NULL)
            rear = NULL;

            delete(temp);
            }
        }

    int frontElement() {
        // Implement the front() function
        if(front == NULL){
            return -1;
        }else{
            return front->data;
        }
    }

    bool isEmpty() {
        // Implement the isEmpty() function
    if(front == rear){
        return true;
    }else{
        return false;
    }
    }
};

int main()
{
     Queue q;

     q.enqueue(5);
     q.enqueue(10);
     q.enqueue(15);
     q.enqueue(20);
     cout<<"Front element of queue is : "<<q.frontElement()<<endl;

     q.dequeue();
     q.dequeue();
      cout<<"Front element of queue is : "<<q.frontElement()<<endl;     

     if(q.isEmpty()){
        cout<<"Queue is empty";
     }else{
        cout<<"Queue is not empty";
     }

     return 0;
}