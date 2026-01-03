#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    // d.pop_front();
    cout<<endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }
}