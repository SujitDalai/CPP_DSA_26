// Q1.
//     1
//    22
//   333
//  4444

// Q2.
//  1111
//  222
//  33
//  4

// Q3.
//  1111
//   222
//    33
//     4

// Q4.
//     1
//    23
//   456
//  78910

#include <iostream>
using namespace std;

// Q1.
//  int main(){
//      int n;
//      cin>>n;
//      int  i=1;
//      while (i<=n){
//          int space = n-i;
//          while (space){
//              cout<<" ";
//              space = space - 1;
//          }
//          int j=1;
//          while (j<=i){
//              cout<<i;
//              j++;
//          }
//          cout<<endl;
//          i++;
//      }
//  }

// Q2.
// int main(){
//     int n;
//     cin>>n;
//     int  i=1;
//     while (i<=n){
//         int j=1;
//         while (j<=n-i+1){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// Q3.
// int main(){
//     int n;
//     cin>>n;
//     int  i=1;
//     while (i<=n){
//         int space = i-1;
//         while (space){
//             cout<<" ";
//             space = space - 1;
//         }
//         int num = n-i+1;
//         while (num){
//             cout<<i;
//             num--;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// Q4.
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
