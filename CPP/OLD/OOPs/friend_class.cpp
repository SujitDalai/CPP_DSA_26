#include <iostream>
using namespace std;

class Sujit{
    private:
    int a;

    protected:
    int b;

    public:
    Sujit(){
        a = 10;
        b = 20;
    }
    friend class Abhay;
};
 
// Here, class Abhay is declared as a friend inside class Sujit. Therefore,
// Abhay is a friend of class Sujit. Class Abhay can access the private members of
// class Sujit.
class Abhay{
    public:
    void display(Sujit& Access) {
        cout<< "Value of a: " << Access.a << endl;
        cout<< "Value of b: " << Access.b << endl;
    }
};

int main() {
    Sujit s;
    Abhay a;
    a.display(s);

    return 0;
}