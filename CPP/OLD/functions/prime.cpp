#include <iostream>
using namespace std;

//1 -> Prime no.
//0 -> Not Prime

bool isPrime(int n){
    for(int i=2; i<=n-1; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"\nPrime";
    }
    else{
        cout<<"\nNot Prime";
    }
}