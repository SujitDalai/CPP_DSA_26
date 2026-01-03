#include<iostream>
using namespace std;

int fib(int n){

    //base condition
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter n: ";
     cin>>n;
     int ans = fib(n);
    cout<<"The nth term of the fibonacci series is: "<<ans;
}