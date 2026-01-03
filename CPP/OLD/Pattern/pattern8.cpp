//Q1.
//    *
//   **
//  ***
// ****

//Q2.
// ****
// ***
// **
// *

//Q3.
// ****
//  ***
//   **
//    *

# include <iostream>
using namespace std;

//Q1.
// int main(){
//     int n;
//     cin>>n;
//     int  i=1;
//     while (i<=n){
//         int space = n-i;
//         while (space){
//             cout<<" ";
//             space = space - 1;
//         }
//         int j=1;
//         while (j<=i){
//             cout<<"*";
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
//     int  i=1;
//     while (i<=n){
//         int j=1;
//         while (j<=n-i+1){
//             cout<<"*";
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
    int  i=1;
    while (i<=n){
        int space = i-1;
        while (space){
            cout<<" ";
            space = space - 1;
        }
        int star = n-i+1;
        while (star){
            cout<<"*";
            star--;
        }
        cout<<endl;
        i++;
    }
}
