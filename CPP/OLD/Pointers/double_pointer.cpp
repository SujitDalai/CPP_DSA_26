#include<iostream>
using namespace std;
// ******* Double Pointers *******
int main()
{
    int a = 10;
    int *p = &a; // pointer
    int **q = &p; // pointer to pointer

// prints address of a (next three statements)
    cout << &a << endl; // address of a
    cout << p << endl; // value at p (address of a)
    cout << *q << endl;

// prints address of p (next two statements)
    cout<< &p << endl;
    cout<< q <<endl;

// prints value of a (next three statements)
    cout<< a <<endl;
    cout<< *p <<endl;
    cout<< **q <<endl;
    
    return 0;
}