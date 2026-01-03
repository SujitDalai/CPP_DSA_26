// Swap alternate elements of an array
// Sort 0 & 1
// Sort 0 & 1 & 2
// pair sum
// triplet sum

#include <iostream>
using namespace std;

// insertion of elements
void insertEle(int arr[], int n){
    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
}

//traversing the array
void printArr(int arr[], int n){
    cout<<"\nElements of the array are: "<<endl;
    for(int i = 0; i <= n-1; i++){
        cout<<arr[i]<<" ";
    }
}

// sort 0 & 1
void sortZeroOne(int arr[], int n){
    int left = 0;
    int right = n-1;
    while(left < right){
        if(arr[left] == 0){
            left++;
        }
        else if(arr[right] == 1){
            right--;
        }
        else{
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

// Swap alternate elements of an array
void swapAlternate(int arr[], int size){
    cout<<"\nAfter swapping alternate elements of the array ->"<<endl;
    for(int i = 0; i < size; i = i + 2){
        if(i+1 < size){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

// sort 0 & 1 & 2
void sortZeroOneTwo(int arr[], int size){
    int i = 0, j = 0, k = size-1;
    while(j <= k){
        if(arr[j] == 0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[j] == 1){
            j++;
        }
        else{
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

// pair sum
void pairSum(int arr[], int n, int s){
    cout<<"\n\nPair Sum elements are:"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == s){
                cout<<min(arr[i], arr[j])<<" ";
                cout<<max(arr[i], arr[j])<<endl;
            }
        }
    }
}

// triplet sum
void tripletSum(int arr[], int n, int s){
    cout<<"\n\nTriplet Sum elements are:"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if(arr[i] + arr[j] + arr[k] == s){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
                }
            }
        }
    }
}

int main(){
    int arr[20];
    insertEle(arr, 9);
    printArr(arr,9);
    // swapAlternate(arr,7);
    // sortZeroOne(arr, 7);
    // sortZeroOneTwo(arr, 9);
    // pairSum(arr, 9, 5);
    tripletSum(arr, 9, 12);
    printArr(arr,9);

    return 0;
}