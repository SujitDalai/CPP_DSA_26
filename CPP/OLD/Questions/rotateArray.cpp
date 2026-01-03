#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k){
    int temp[n];
    for(int i = 0; i < n; i++){
        temp[(i+k)%n] = arr[i];   // logic
    }
    for(int i = 0; i<n;i++){ // copying elements from temp to main array
        arr[i] = temp[i];
    }
}

void printElements(int arr[], int n){
    cout<< "The array elements are: "<<endl;
    for(int i = 0; i  < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printElements(arr, 10);
    rotateArray(arr, 10, 6);
    printElements(arr, 10);

    return 0;
}