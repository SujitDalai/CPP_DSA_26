#include<iostream>
using namespace std;

int getMax(int num[], int n){
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)       
        {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n){
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)       
        {
            min = num[i];
        }
    }
    return min;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    cout<<"Enter the elements of array : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nMaximum no. is: "<<getMax(arr, size);
    cout<<"\nMaximum no. is: "<<getMin(arr, size);
    
}
