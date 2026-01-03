// Q.1
// A 
// B B 
// C C C

// Q.2
// A 
// A B 
// A B C

// Q.3
// A 
// B C
// D E F

// Q4.
//  A 
//  B C 
//  C D E

// Q5.
//  D 
//  C D
//  B C D
//  A B C D 

#include <iostream>
using namespace std;

// Q1.
//  int main(){
//      int n;
//      cin>>n;
//      int i=1;
//      while(i<=n){
//         int j=1;

//         while(j<=i){
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

//         while(j<=i){
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

//         while(j<=i){
//             cout<<ch<<" ";
//             ch = ch+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// Q4.
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             char ch = 'A' + i + j - 2;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

//Q.5
int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n -i;
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch+1;
            j++;
        }
        cout << endl;
        i++;
    }
}