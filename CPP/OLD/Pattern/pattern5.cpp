// Q1.
// 1
// 2 3
// 3 4 5 
// 4 5 6 7

// Q2.
// 1
// 2 1
// 3 2 1  
// 4 3 2 1
 

#include <iostream>
using namespace std;

//Q1.
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//        int j=1;
//        int value = i;
//         while(j<=i){
//             cout<<value<<" ";
//             value++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

//Q2.
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
       int j=1;
       int value = i;
        while(j<=i){
            cout<<value<<" ";
            value--;
            j++;
        }
        cout<<endl;
        i++;
    }
}