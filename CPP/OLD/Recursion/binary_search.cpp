#include<iostream>
using namespace std;

void printarr(int arr[],int start, int end){
    for(int i=start; i<=end; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int arr[], int start, int end, int key){

cout<<endl;
printarr(arr,start,end);


    if(start>end){
        return false;
    }
    int mid = start + (end-start)/2;

    if(arr[mid] == key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
}

int main(){
    int arr[10] = {1,3,5,6,7,8,10,20,40,2};
    int size =10;

    int ans = binarySearch(arr,0,9,4);
    if(ans){
        cout<<"Element Found";
    }
    else{
        cout<<"Element not found";
    }
}