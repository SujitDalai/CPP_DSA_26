#include<iostream>
using namespace std;

int isSum(int arr[], int size){
    if(size==0){
    return 0;
    }
    if(size == 1){
        return arr[0];
    }
    
    int reamainingPart = isSum(arr+1,size-1);
    int sum = arr[0] + reamainingPart;
    return sum;
    
}

int main(){
    int arr[6] = {1,3,5,6,7,8};
    int size =6;

    int ans = isSum(arr,size);
    cout<<"Sum: "<<ans;
    
}