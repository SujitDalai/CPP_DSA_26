#include <iostream>
using namespace std;

int factorial(int n){
    int fact =1;

    for(int i=1; i<=n; i++){
        fact = fact* i;
    }
    return fact;
}
 int nCr(int n, int r){
    int neum = factorial(n);
    int denom =factorial(r) * factorial(n-r);

    return neum/denom;
 }

 int main(){
    int n,r;
    cin>>n>>r;
    if(n >= r){
        cout<<"nCr :"<<nCr(n,r);
    }
    else{
        cout<<"Please enter n>=r>=0";
    }
    
 }