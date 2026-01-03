#include <iostream>
using namespace std;

// Binary Search
int binarySearch(int arr[], int key, int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start/2);

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start/2);
    }
    return -1;
}

int main(){
    int arr[20] = {1,2,3,4,5,6,7,10,2,33};
    int ans = binarySearch(arr, 23, 10);
    cout<< "The key found at index: "<<ans;

    return 0;
}