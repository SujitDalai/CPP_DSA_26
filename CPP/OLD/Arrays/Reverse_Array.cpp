#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    
    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}
int main(){
    int arr[10] = {12,34,4,5,5,6,0,-3,1,23};
    int brr[5] = {6,0,-3,1,23};

    reverseArray(arr,10);
    reverseArray(brr,5);

    cout<<"\nThe reversed elements of array are: "<<endl;
    print(arr,10);
    cout<<"\nThe reversed elements of array are: "<<endl;
    print(brr,5);
}