#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i] <<" ";
    }
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        bool swapped = false;
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    int arr[] = {10,2,34,55,21,2,0,15,78};
    int n = sizeof(arr)/sizeof(arr[0]); 
    printArray(arr, n);
    cout<<endl;
    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}