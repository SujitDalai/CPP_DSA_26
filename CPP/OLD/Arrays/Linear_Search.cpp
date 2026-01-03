// Time Complexity = O(n)
// Linear Search

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10] = {12,34,4,5,5,6,0,-3,1,23};
    int key;
    cout<<"\nEnter the no. to search for: ";
    cin>>key;
    bool found = search(arr, 10, key);

    if(found){
        cout<<"\nKey is present";
    } 
    else{
        cout<<"\nKey is not present";
    }
    return 0;
}