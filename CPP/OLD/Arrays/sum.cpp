#include<iostream>
using namespace std;

int arrSum(int arr[],int n){
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"\n Sum is: "<<sum<<endl;
    return 0;
}

int main(){
    int arr[100];
    int size;
    cout<<"\n Enter the size of the array: "<<endl;
    cin>>size;
    cout<<"\n Enter the elements of array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    arrSum(arr,size);
    return 0;
}
