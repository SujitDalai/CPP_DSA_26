// **** COMPILE TIME POLYMORPHISM **** 
// Function Overloading 

#include <iostream>
using namespace std;
 
class A { 
    public:
    void sayHello(){
        cout<< "Good morning Sujit" << endl;
    }
    void sayHello(string name){
        cout<< "Hello " <<name<< endl;
    }
    void sayHello(char name){
        cout<< "Hii " <<name<< endl;
    }
};

int main()
{
    A obj;
    obj.sayHello("Sujit");

    return 0;
}