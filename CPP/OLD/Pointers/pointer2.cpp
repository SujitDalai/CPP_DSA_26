#include<iostream>
using namespace std;
// ******* Pointer Arithmetic *******
int main()
{
    int i = 5;
    int *t = &i;
    // cout<< ++(*t) << endl;
    // cout<< (*t)++ << endl;

    *t = *t + 1;
    cout<< *t << endl;

    cout<< t << endl; 
    t = t + 1; // It will move to next location 
    cout<< t << endl; 

}