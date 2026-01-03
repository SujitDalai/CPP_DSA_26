#include<iostream>
using namespace std;

// insert and print array elements
void insertElements(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<"Enter the "<<i+1<<" th element: "<<endl;
        cin>>arr[i];
    }
}
//print elements of the array
void printElements(int arr[], int n){
    cout<< "The array elements are: "<<endl;
    for(int i = 0; i  < n; i++){
        cout<<arr[i]<<" ";
    }
}

// reverse an array
int reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}

int main(){
    int arr[20];
    insertElements(arr, 6);
    printElements(arr, 6);
    reverseArray(arr,6);
    cout<<"\nThe reverse element of array are :" << endl;
    printElements(arr, 6);

    return 0;
}