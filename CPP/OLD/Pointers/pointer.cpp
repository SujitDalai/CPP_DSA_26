#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    cout<< "Value of num : " << num << endl;

    // address of operator - &
    cout<< "Address of num :" << &num << endl;

    int *ptr = &num;
    cout<< "Value is : " << *ptr << endl; // print value of num
    cout<< "Address is : " << ptr << endl; // print address of num

    cout<< "Size of integer is: " << sizeof(num) << endl; // size of num OR size of *ptr
    cout<< "Size of integer pointer is: " << sizeof(ptr) << endl;

    double d = 4.378;
    double *ptr2 = &d;
    cout<< "Value is : " << *ptr2 << endl; // print value of num
    cout<< "Address is : " << ptr2 << endl; // print address of num

    cout<< "Size of double is: " << sizeof(d) << endl; // size of num OR size of *ptr2
    cout<< "Size of double pointer is: " << sizeof(ptr2) << endl;

    // char ch = 'a';
    // char *ptr3 = &ch;
    // cout<< "Char Value is : " << *ptr3 << endl; // print value of num
    // cout<< "Char Address is : " << ptr3 << endl; // print address of num

    // cout<< "Size of char is: " << sizeof(ch) << endl; // size of num OR size of *ptr2
    // cout<< "Size of char pointer is: " << sizeof(ptr3) << endl;

    // string str = "Sujit Dalai";
    // string *ptr4 = &str;
    // cout<< "String Value is : " << *ptr4 << endl; // print value of num
    // cout<< "String Address is : " << ptr4 << endl; // print address of num

    // cout<< "Size of String is: " << sizeof(str) << endl; // size of num OR size of *ptr2
    // cout<< "Size of String pointer is: " << sizeof(ptr4) << endl;


    return 0;
}