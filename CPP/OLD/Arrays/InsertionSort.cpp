#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void insertionSort(int arr[],int n){
    int j, current;
    for(int i = 1; i < n; i++){
        int current = arr[i];
        j = i-1;

        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array[] = {2,22,12,23,32,15};
    int n = sizeof(array)/sizeof(array[0]); 
    insertionSort(array, n);
    print(array,n);
    return 0;
}