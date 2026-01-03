#include<iostream>
using namespace std;

int firstOcc(int arr[],int size, int key){
    int start = 0;
    int end = size-1; 
    int ans = -1;
    int mid = start + (end - start)/2;

    while (start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid]){
            start = mid+1;
        }
        else if (key < arr[mid]){
            end = mid  - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(int arr[],int size, int key){
    int start = 0;
    int end = size-1; 
    int ans = -1;
    int mid = start + (end - start)/2;

    while (start <= end){

        if(arr[mid] == key){
            ans = mid;
            start = mid +1;
        }
        else if (key > arr[mid]){
            start = mid+1;
        }
        else if (key < arr[mid]){
            end = mid  - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int key;
    cout<<"Enter the value you want to search for: "<<endl;
    cin>>key;

    int Index = firstOcc(arr, 8, key);
    int Index1 = lastOcc(arr, 8, key);
    int TotalOcc = Index1 - Index + 1;
    cout<<"Total no. of Occurance of "<<key<<" is: "<<TotalOcc<<endl;

    return 0;
}
