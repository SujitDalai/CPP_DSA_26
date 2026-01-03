#include<iostream>
using namespace std;

class Hero{
    private:          // Access Specifier
    string name;     //Data Members
    int health;
    string level;

    void print(){                        // Member function
        cout<<"Name: "<<name<<endl;
        cout<<"Health: "<<health<<endl;
        cout<<"Level: "<<level<<endl;
    }
};

int main()
{
    Hero obj1;      // Declare an object

    obj1.name = "Sujit";      // accessing data members
    obj1.health = 95;
    obj1.level = "A";

    obj1.print();      // accessing member function

    return 0;
}