// Time Complexity = O(log n)
// Binary Search
#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    // int mid =(start + end)/2;
    // **** start + (end-start/2) = (start + end)/2 ****
    // Done for Optimization
    int mid = start + (end-start/2);

    while (start<=end){
        if (arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start  = mid+1;
        }
        else{
            end = mid - 1;
        }
        // mid = (start +end)/2;
    // **** start + (end-start/2) = (start + end)/2 ****
    // Done for Optimization
        mid =start + (end-start/2);
    }
    return -1;
}
int main(){
    int even[6] = {2,4,6,8,12,18};
    int key;
    cout<<"Enter the value you want to search for: "<<endl;
    cin>>key;

    int evenIndex = binarySearch(even, 6, key);
    cout<<"Index of "<<key<<" is: "<<evenIndex<<endl;

    return 0;
}