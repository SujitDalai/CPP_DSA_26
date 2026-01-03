/* You are given an integer array 'ARR' of size 'N' and an integer 'S'. 
Your task is to find all disctinct triplets s.t sum of triplets equals 'S'. */
/*
Array = 1,2,3,4,5,6,7,8,9,10
s = 10
Output - 1 2 7
         1 3 6
         1 4 5
         2 3 5
*/

#include<iostream>
using namespace std;

void tripletSum(int a[], int n, int s) {
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(a[i] + a[j] + a[k] == s){
                     cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
            }
            } 
        }
        
    }
}
int main(){
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    tripletSum(arr, 10, 10);
    return 0;
}