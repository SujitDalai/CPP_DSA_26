#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    // sum of numbers 1 to n using for loop ****
    // for(int i=0; i<=5; i++){
    //     sum = sum + i;
    // }
    // cout<<sum;

    // sum of numbers 1 to n using while loop ****
    // int n;
    // int i = 1;
    // cin>>n;
    // while (i<=n)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // cout<<"sum from "<<"1 to "<<n <<" is : "<<sum<<endl;

    // sum of even numbers from 1 to n using while loop ****

    int n;
    int i = 2;
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
            sum = sum + i;
        i++;
    }
    cout << "Sum of even numbers from "
         << "1 to " << n << " is : " << sum << endl;

    return 0;
}