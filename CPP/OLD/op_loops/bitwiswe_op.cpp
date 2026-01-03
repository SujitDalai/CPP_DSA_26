#include <iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    // AND
    cout<< "a&b: " <<(a&b)<<endl;
    //OR
    cout<< "a|b: " <<(a|b) <<endl;
    //NOT
    cout<< "~a: " <<(~a)<<endl;
    //XOR
    cout<< "a^b: " <<(a^b) <<endl;
// RIGHT SHIFT
    cout<< (17>>1) << endl;
    cout<< (17>>2) << endl;
//LEFT SHIFT
    cout<< (19<<1) << endl;
    cout<< (21<<2) << endl;

    int i=7;
    // INCREMENT/DECREMENT OPERATOR
    cout<<(i++)<<endl;
    //7, i=8
    cout<<(++i)<<endl;
    //9, i=9
    cout<<(i--)<<endl;
    //9, i=8
    cout<<(--i)<<endl;
    //7, i=7
    return 0;
}