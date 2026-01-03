#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void swapAlternate(int arr[], int size){
    for (int i = 0; i < size; i = i+2)
    {
        if (i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }

}
int main(){
    int arr[10] = {12,34,4,5,5,6,0,-3,1,23};
    int brr[5] = {6,0,-3,1,23};

    swapAlternate(arr,10);
    swapAlternate(brr,5);

    cout<<"\nThe reversed elements of array are: "<<endl;
    print(arr,10);
    cout<<"\nThe reversed elements of array are: "<<endl;
    print(brr,5);
}