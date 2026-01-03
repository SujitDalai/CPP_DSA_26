#include<iostream>
using namespace std;
 
class Circle
{  
    // private data member
    private:
        double radius;
      
    // public member function   
    public:   
        void compute_area(double r)
        { 
            radius = r;
            double area = 3.14*radius*radius;
             
            cout << "Radius is: " << radius << endl;
            cout << "Area is: " << area;
        }
};

int main()
{  
    Circle obj;
    // trying to access private data member directly outside the class
    obj.compute_area(7);

    return 0;
}