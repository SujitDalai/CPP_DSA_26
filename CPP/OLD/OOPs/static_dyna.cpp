#include<iostream>
using namespace std;

class Hero{
    public:          // Access Specifier
    string name;     //Data Members
    int health;
    string level;
};

int main()
{
    Hero obj1;      // ***** Static Allocation of object *****
    obj1.name = "Sujit";      // accessing data members
    obj1.health = 78;
    obj1.level = "A";

    cout<<"(Static) Name: "<<obj1.name<<endl;
    cout<<"Health: "<<obj1.health<<endl;
    cout<<"Level: "<<obj1.level<<endl;

    Hero *obj2 = new Hero;    // ***** Dynamic Allocation of object *****
    obj2->name = "Akash";
    obj2->health = 95;
    obj2->level = "B";

    cout<<"(Dynamic) Name: "<<(*obj2).name<<endl;
    cout<<"Health: "<<(*obj2).health<<endl;
    cout<<"Level: "<<(*obj2).level<<endl;

    //**********************  OR  *********************

    //Method 2
    // cout<<"(Dynamic m1) Name: "<<obj2->name<<endl;
    // cout<<"Health: "<<obj2->health<<endl;
    // cout<<"Level: "<<obj2->level<<endl;

    return 0;
}