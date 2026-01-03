#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
// Here  a(5,1) -->In vector a -> 5 - size of vector, initialize all value to 1
    vector<int> a(5,1); 

    cout<<"print a"<<endl;
    for(int i:a){
    cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity --> "<<v.capacity()<<endl;

    v.push_back(10);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    v.push_back(20);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    v.push_back(30);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    v.push_back(40);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    v.push_back(50);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    
    cout<<"Size --> "<<v.size()<<endl;

    cout<<"front : "<<v.front()<<endl;
    cout<<"back : "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
    cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
    cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size : "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size : "<<v.size()<<endl;


}