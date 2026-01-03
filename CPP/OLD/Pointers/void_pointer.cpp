#include<iostream>
using namespace std;
// ******* Void Pointers *******
int main()
{
    void *ptr;
    int i = 10;
    //assign int to void
    ptr = &i;
    cout<< "Address of variable i : "<< &i << endl;
    cout<< "Address where the void pointer is pointing : "<< ptr << endl;
    return 0;
}