/* You are given an integer array 'ARR' of size 'N' and an integer 'S'. 
Your task is to return the list of all pairs of elements such that 
each sum of elements of each pair equals 'S'. */
/* Each pair should be sorted i.e the first value should be less than or equals to the second value. */
/*
Array = 1,2,3,4,5
s = 5 
Output - 1,4
         2,3
*/

#include<iostream>
using namespace std;

void pairSum(int a[], int n, int s) {
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if(a[i] + a[j] == s){
                cout<<min(a[i],a[j])<< " ";
                cout<<max(a[i],a[j])<<endl;
            } 
        }
        
    }
}
int main(){
    int arr[5] ={2,-3,3,3,-2};
    pairSum(arr, 5, 0);
    return 0;
}