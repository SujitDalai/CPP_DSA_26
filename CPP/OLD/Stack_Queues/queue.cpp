#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(11);
    cout<<"Front of Queue is "<<q.front()<<endl;
    q.push(15);
    q.push(18);
    q.push(19);
    cout<<"Back of Queue is "<<q.back()<<endl;


    cout<<"Size of queue is : "<<q.size()<<endl;

    q.pop();
    cout<<"Front of Queue is "<<q.front()<<endl;

    cout<<"Size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty "<<endl;
    }else{
        cout<<"Queue is not empty "<<endl;
    }

    return 0;
}