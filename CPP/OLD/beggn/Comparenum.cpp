#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>> a;
    cin>> b;
    cout<< "\nThe numbers are :"<<a<<" & "<<b;
    if(a>b){
        cout<<"\na is greater than b";
    }
    else if(a<b){
        cout<<"\na is smaller than b";
    } 
    else{
        cout<<"\na is equal to b";
    } 
    return 0;
}