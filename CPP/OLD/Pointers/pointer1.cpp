#include<iostream>
using namespace std;

int main()
{
    /*
    int *p; // bad practice to declare like this as it point anywhere in the memory and gives a garbage value

    int i =5;

    // int *ptr = &i;
    // **** OR ****
    int *ptr = 0;
    ptr = &i;

    cout<< *ptr << endl;
    cout<< ptr << endl;
    */

   int num = 5;
   int a = num;
   cout<<"num before : " << num << endl;
   a++;
   cout<<"num after : " << num << endl;

   int *p  = &num;
   cout<< "before : " << num << endl;
   (*p)++;
   cout<<"after : " << num << endl;

   // copying a pointer
   int *q = p;
   cout << p << " -- " << q << endl;
   cout << *p << " -- " << *q << endl;


    return 0;
}