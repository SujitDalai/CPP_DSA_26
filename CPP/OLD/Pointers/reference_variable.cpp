#include<iostream>
using namespace std;

void update1(int &n){ // passing reference variable
    n++;
}

void update(int n){
    n++;
}

int main()
{
    /*
    int i = 5;
     
    // Reference Variable
    int &j = i;

    cout << i <<" " << j <<endl;
    i++;
    cout << i <<" " << j <<endl;
    j++;
    cout << i <<" " << j <<endl;
    */

    int n = 10;
    cout << n << endl;
    // update(n);
    update1(n);
    cout << n << endl;

    return 0;
}