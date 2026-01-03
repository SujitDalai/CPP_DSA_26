#include<iostream>
using namespace std;
// ******* Dangling Pointers *******

// By a function call
int *fun() { 
        int x = 10;
        return &x;
    }

int main()
{
    int *p = fun();
    // p points to something that is not valid anymore
    cout << *p;
    return 0;
}


/*
// By deallocation of memory
int main() {
//dynamic memory allocation. //after calling free() p becomes a dangling pointer
    int * p = (int *)malloc(sizeof(int));
    free(p);

   //now p no more a dangling pointer.
    p = NULL;

    return 0;
}
*/

// When Variable goes out of scope
/*
void main() {
    int * ptr;
    ........//any code statements
    {
        int ch; 
        ptr = & ch;
    }
    ......
// Here ptr is dangling pointer
}
*/