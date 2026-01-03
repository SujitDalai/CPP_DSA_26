// Q.1
// A A A
// B B B
// C C C

// Q.2
// A B C
// A B C
// A B C

// Q.3
// A B C
// D E F
// G H I

// Q4.
//  A B C
//  B C D
//  C D E

#include <iostream>
using namespace std;

// Q1.
//  int main(){
//      int n;
//      cin>>n;
//      int i=1;
//      while(i<=n){
//         int j=1;

//         while(j<=n){
//             char ch = 'A' + i - 1;
//             cout<<ch<<" ";
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

//         while(j<=n){
//             char ch = 'A' + j - 1;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// Q3.
//  int main(){
//      int n;
//      cin>>n;
//      int i=1;
//      char ch = 'A';
//      while(i<=n){
//         int j=1;

//         while(j<=n){
//             cout<<ch<<" ";
//             ch = ch+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// Q4.(method 1)
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + i + j - 2;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// Q4.(method 2)
int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i -1;
        while (j <= n)
        {
            cout << ch << " ";
            ch = ch +1;
            j++;
        }
        cout << endl;
        i++;
    }
}