#include <iostream>
#include <stack>
using namespace std;

// Implementing stack using array
class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Stack is not empty";
    }

    // //********creation of stack using C++ STL********
    // stack<int> s;

    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);

    // s.pop();

    // cout <<"printing top element: "<<s.top()<<endl;

    // if(s.empty()){
    //     cout<<"stack is empty"<<endl;
    // }else{
    //     cout<<"stack is not empty"<<endl;
    // }

    // cout<<"Size of stack is: "<<s.size();

    return 0;
}