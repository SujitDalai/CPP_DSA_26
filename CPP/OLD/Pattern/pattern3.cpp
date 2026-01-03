//Q1.
// 1 2 3
// 1 2 3  
// 1 2 3 
//Q2.
// 3 2 1
// 3 2 1  
// 3 2 1 
//Q3.
// 1 2 3
// 4 5 6  
// 7 8 9 

#include <iostream>
using namespace std;

//Q1.
// int main(){
//    int i=1;
//    int n;
//    cin>>n;
//    while(i<=n){
//     int j=1;
//     while (j<=n){
//         cout<<j<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
//    }
//    return 0;
// }

//Q1.
// int main(){
//    int i=1;
//    int n;
//    cin>>n;
//    while(i<=n){
//     int j=1;
//     while (j<=n){
//         cout<<n-j+1<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
//    }
//    return 0;
// }

//Q3.
int main(){
    int n; 
    cin>>n;
    int i=1;
    int count= 1;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
            cout<<count<<" ";
            count = count +1;
            j++;
        }
        cout<<endl;
        i++;
    }
}