#include<iostream>
using namespace std;

void printarr(int arr[],int size){
    cout<<"Sizeof array is "<<size<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool linearSearch(int arr[], int size, int key){
    printarr(arr,size);
    if(size==0){
    return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        int reamainingPart = linearSearch(arr+1,size-1,key);
        return reamainingPart;
    }
}

int main(){
    int arr[6] = {1,3,5,6,7,8};
    int size =6;

    int ans = linearSearch(arr,size,7);
    if(ans){
        cout<<"Element Found";
    }
    else{
        cout<<"Element not found";
    }
}