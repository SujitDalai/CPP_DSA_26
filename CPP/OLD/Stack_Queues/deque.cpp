#include <iostream>
#include <queue>
using namespace std;

// Doubly ended queue using C++ STL

int main(){

    deque<int> d;

    d.push_front(10);
    d.push_back(15);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    // d.pop_front();

    // cout<<d.front()<<endl;
    // cout<<d.back()<<endl;

    d.pop_back();

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    if(d.empty()){
        cout<<"Queue is empty."<<endl;
    }else{
        cout<<"Queue is not empty."<<endl;
    }
    return 0;
}