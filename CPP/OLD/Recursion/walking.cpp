#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<"src "<<src<<" dest "<<dest<<endl;
    //base condition
    if(src == dest){
        cout<<"Reached Home..."<<endl;
        return;
    }
// processing
    src++;
// recursive call
    reachHome(src,dest);

}

int main(){
    int dest = 10;
    int src = 1;

    cout<<endl;
    reachHome(src,dest);
    return 0;
}