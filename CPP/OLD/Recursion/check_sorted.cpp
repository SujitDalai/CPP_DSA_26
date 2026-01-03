#include<iostream>
using namespace std;

int isSorted(int arr[], int size){
    if(size==0 || size==1)
    return true;

    if(arr[1]<arr[0]){
        return false;
    }
    else{
        int remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
    
}

int main(){
    int arr[6] = {1,3,5,6,700,88};
    int size =6;

    int ans = isSorted(arr,size);
    if(ans){
        cout<<"Array Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
}