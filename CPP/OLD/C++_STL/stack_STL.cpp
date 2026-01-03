#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Sujit");
    s.push("Samar");
    s.push("Akash");
    s.push("Abhay");

    cout<<"Top Element : "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element : "<<s.top()<<endl;

    cout<<"Size of stack : "<<s.size()<<endl;

    cout<<"Empty or not : "<<s.empty()<<endl;


}