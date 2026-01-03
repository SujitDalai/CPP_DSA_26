#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
int main(){
    int n1,n2;
    cout<<"Enter two nos. : "<<endl;
    cin>>n1>>n2;
    int ans = gcd(n1,n2);
    cout<< "\nThe GCD of the two nos. is: "<<ans;
    return 0;
}