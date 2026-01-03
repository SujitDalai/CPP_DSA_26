#include <iostream>
using namespace std;

int main(){
    int i=2,n;
    cin>>n;
    while(i<n){
        if(n % i ==0){
        cout<<"not prime";
        return 0;
        }
        i++;
    }
    cout<<"prime";
    return 0;
}