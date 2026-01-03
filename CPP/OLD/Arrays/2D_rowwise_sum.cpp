#include<iostream>
using namespace std;

//Row wise Sum print

void printSumRow(int arr[][4],int i, int j){
    cout<<"Sum(rowwise): ";
     for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0; j<4;j++){
            sum +=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

//Row wise Sum print
void printSumCol(int arr[][4],int i, int j){
    cout<<"Sum(colwise): ";
     for(int j=0;j<4;j++){
        int sum = 0;
        for(int i=0; i<3;i++){
            sum +=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int largestRowSum(int arr[][4],int i, int j){

    int maxi = INT_MIN;
    int rowIndex = -1;

     for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0; j<4;j++){
            sum +=arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"The maximum sum is: "<<maxi<<endl;
    return i;
}

int main()
{
    int arr[3][4];
    // int arr[3][4]= {1,2,3,4,5,6,7,8,9,1,2,3};
    // int arr[3][4]= {{1,2,3,4},{5,6,7,8},{9,1,2,3}};
    
    //for input
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0; j<4;j++){
            cin>>arr[i][j];
        }
    }

    //for output
    cout<<"Elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // printSumRow(arr,3,4);
    // printSumCol(arr,3,4);
    largestRowSum(arr,3,4);

    return 0;
}