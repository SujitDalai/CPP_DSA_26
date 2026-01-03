#include <iostream>
using namespace std;

// Time Complexity = O(log n)
int peakEle(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    
    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}


// Time complexity = O(n)
// int peakEle(int arr[], int n){
//     int ans = -1;
//     for(int i = 0; i < n; i++){
//         if(arr[i] > arr[i+1]){
//             ans = arr[i];
//             break;
//         }
//     }
//     return ans;
// }

int main(){
    int arr[] = {1,3,4,5,6,5,3,2,1};
    int ans = peakEle(arr, 9);
    cout<<arr[ans];

    return 0;
}