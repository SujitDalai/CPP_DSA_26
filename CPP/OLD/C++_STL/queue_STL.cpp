#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Sujit");
    q.push("Samar");
    q.push("Akash");
    q.push("Abhay");

    cout<<"Top Element : "<<q.front()<<endl;
    q.pop();
    cout<<"Top Element : "<<q.front()<<endl;

    cout<<"Size of queue : "<<q.size()<<endl;

    cout<<"Empty or not : "<<q.empty()<<endl;


}