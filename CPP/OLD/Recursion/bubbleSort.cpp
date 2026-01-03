#include<iostream>
using namespace std;

void bubbleSort(int *arr, int size){
    if(size==0 || size==1)
    return;

    for(int i=0;i<size-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,size-1);   
}

int main(){
    int arr[6] = {1,3,5,6,700,88};
    int size =6;

    bubbleSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}