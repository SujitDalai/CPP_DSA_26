#include <iostream>
using namespace std;

int partition(int arr[],int start,int end)
{
    int pivot=arr[start];
    int count=0;
    for(int i=start+1 ; i<= end ;i++)
    {
        if(arr[i] <= pivot)
        count++;
    }
    int pos=start+count;
    swap(arr[start],arr[pos]);
    int i=start;
    int j=end;
    while(i < pos && j>pos)
    {
        while(arr[i] <= pivot)
        i++;
        while(arr[j] > pivot)
        j--;
        if(i < pos && j>pos)
        swap(arr[i++],arr[j--]);
    }
    return pos;
}
void quickSort(int arr[],int start,int end)
{
    if(start >= end)
     return;
    int index=partition(arr,start,end);
    quickSort(arr,start,index-1);
    quickSort(arr,index+1,end);
} 

int main()
{
    int arr[12] = {1, 99, 2, 43, 3, 0, 100, 5, 6, 700, 88, 6};
    int n = 12;

    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}