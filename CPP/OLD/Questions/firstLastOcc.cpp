// Program to find first and last position of an element in an sorted array
// Program to find the total number of occurances in an sorted array
// Time Complexity = O(log n)
// Space Complexity = O(log n) for recursion stack

#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        mid  = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid  = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int arr[] = {0,0,1,1,2,2,2,2};
    int key;
    cout<<"Enter the key whose position you want to know: "<<endl;
    cin>>key;
    cout<<endl;

    int focc = firstOcc(arr, 8, key);
    int locc = lastOcc(arr, 8, key);
    cout<<"The key is first occouring in the position in: " <<focc<<endl;
    cout<<"The key is last occouring in the position in: " <<locc<<endl;

    int totalOcc = (locc - focc) + 1;
    cout<<"The total no. of occurances of the key is: "<< totalOcc <<endl;

    return 0;
}