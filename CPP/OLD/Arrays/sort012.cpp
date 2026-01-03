/*
Sort 0 & 1 & 2
Array - 0,1,0,0,2,2,0,1,1,2,0,1
Output - 0,0,0,0,0,1,1,1,1,2,2,2
*/ 

#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sortZOT(int arr[], int n) {
    int i = 0, j =0, k =n-1;
    while(j<=k){
        if(arr[j] == 0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
         else if(arr[j] == 1){
            j++;
        }
        else{ 
        swap(arr[j],arr[k]);
        k--;
        }
    }
} 
int main(){
    int arr[15] ={0,1,2,0,0,1,2,2,1,1,0,2,2,0,1};
    sortZOT(arr,15);
    print(arr,15);

    return 0;
}