#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Swap function
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void selectionSort(int arr[],int n){
    int minIndex;
    for (int i = 0; i < n-1; i++)
    {
        minIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIndex]);
            minIndex = j;
        }
            swap(&arr[minIndex], &arr[i]);
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
    selectionSort(array, n);
    print(array,n);
    return 0;
}