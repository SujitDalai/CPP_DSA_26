/*
Sort 0 & 1
Array - 0,1,0,0,0,1,1,0,1
Output - 0,0,0,0,0,1,1,1,1
*/ 

#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sortOne(int arr[], int n) {
    int left = 0, right =n-1;
    while(left<right){
        if(arr[left] == 0){
            left++;
        }
         else if(arr[right] == 1){
            right--;
        }
        else{
            swap(arr[left],arr[right]);
        left++;
        right--;
        }
    }
} 
int main(){
    int arr[8] ={0,1,0,0,1,1,1,0};
    sortOne(arr,8);
    print(arr,8);
    return 0;
}