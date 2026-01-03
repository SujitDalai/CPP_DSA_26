#include<iostream>
using namespace std;

int power(int n){

    //base condition
    if(n==0){
        return 1;
    }

    //recursive call
    return 2 * power(n-1);
}

int main(){
    int n;
    cout<<"Enter n: ";
     cin>>n;
     int ans = power(n);

    cout<<"Power of 2^n is: "<<ans;
}