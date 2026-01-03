#include<iostream>
using namespace std;

int main()
{
    
    int arr[10] = {2,5,6,9,15};

    cout<< "Value of the first element : "<< arr[0] << endl;
    cout<< "Address of the first memory block of array: " << arr << endl;
    cout<< "Address of the first memory block of array: " << &arr[0] << endl;
    cout<< "4th : " << *arr << endl; // gives value of the first element
    cout<< "5th : " << *arr + 1 << endl; 
    cout<< "6th : " << *(arr + 1) << endl; 

    cout<< "7th : " << arr[2] << endl;
    cout<< "8th : " << *(arr + 2) << endl;
    // So we get, arr[i] = *(arr + i)



// ************** Differences (ARRAY & POINTERS) --- SIZE ****************
/*
   int m[10] = {10,20,30,40,50};

   cout << "First element : " << m[0] << endl;
   cout << sizeof(m) << endl;
   cout << sizeof(m[0]) << endl;

   int *ptr = &m[0];
   cout << "First element : " << *ptr << endl; 
   cout << sizeof(ptr) << endl;
   cout << sizeof(*ptr) << endl;
*/

/*
   int m[10] = {10,20,30,40,50};
   //All three statements will  give address of the first element  (below)
   cout << m <<endl;
   cout << &m <<endl;
   cout << &m[0] <<endl; 

   int *ptr = &m[0];
   cout << ptr <<endl; // gives adderess of the first element in array
   cout << *ptr <<endl; // Gives the first element
   cout << &ptr <<endl; // gives adderess of ptr
*/

/* 
   int m[10] = {10,20,30,40,50};

   // ERROR
      // m = m + 1;
    
    int *ptr = &m[0];
    cout<< ptr <<endl;
    ptr = ptr + 1;
    cout<< ptr <<endl;
*/

/*
// ************************ CHAR ARRAYS WITH POINTERS ************************
    int array[10] = {12,38,11,34,95};
    char ch[6] = "abcde";

    cout << array << endl;
    cout << ch << endl; // prints the string

    char *ptr = &ch[0];
    cout<< ptr << endl;  // prints entire string
*/

    return 0;
}