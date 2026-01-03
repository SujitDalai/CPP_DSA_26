// Q1.
// *
// * *
// * * *
// * * * *

// Q2.
// 1
// 2 2
// 3 3 3 
// 4 4 4 4 

// Q3.
// 1
// 2 3
// 4 5 6
// 7 8 9 10 

 

#include <iostream>
using namespace std;

// Q1.
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//        int j=1;
//         while(j<=i){
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// Q2.
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//        int j=1;
//         while(j<=i){
//             cout<<i<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// Q3.
int main(){
    int n;
    cin>>n;
    int i=1;
    int count = 1;
    while(i<=n){
       int j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}


