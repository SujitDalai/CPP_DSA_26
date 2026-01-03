#include<iostream>
using namespace std;

int factorial(int n){

    //base condition
    if(n==0){
        return 1;
    }

    //recursive call
    return factorial(n-1) * n;
}

int main(){
    int n;
    cout<<"Enter the no.: ";
     cin>>n;
     int ans = factorial(n);

    cout<<"Factorial is: "<<ans;
}