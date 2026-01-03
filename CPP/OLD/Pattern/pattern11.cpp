// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int start = 1;
        while(j<=n-i+1){
        cout<<start;
        start++;
        j++;
        }
        int star = i-1;
        while(star){
            cout<<"*";
            star--;
        }
        int star1 = i-1;
        while(star1){
            cout<<"*";
            star1--;
        }
        int end=n-i+1;
        while(end){
            cout<<end;
            end--;
        }

         cout<<endl;
         i++;
    }
}
