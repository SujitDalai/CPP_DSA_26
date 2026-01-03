#include <iostream>
#include <string.h>
using namespace std;

int main(){

    // char

    cout << "Playing with char !" << endl << endl;
    cout << "Size of char DataType: " << sizeof(char) << " byte" <<endl;
    char ch = 's';
    cout << "1st: " << ch << endl;
    

    char ch3[20] = "sujitdalai";
    cout << "2nd: " << ch3 <<endl;
    cout << "Length of 2nd: " << strlen(ch3) << endl;

    char ch1[20] = "sujitdalai";
    ch1[5] = '\0';
    cout << "3rd: " << ch1 << endl;

    char ch2[20] = "sujit dalai";
    ch2[5] = '\0';
    cout<< "4th: " << ch2 << endl;

    cout << endl;


    //string

    cout << "Playing with string !" << endl << endl;
    cout << "Size of string DataType: " << sizeof(string) << " bytes" <<endl;
    string str= "sujitdalai78";
    str[5] = '\0';
    cout<<"4th: " << str << endl;
    cout<< "4th length: " << str.length() << endl;
    cout<< "4th length: " << str.size() << endl;

    string str1= "hello sujit dalai";
    cout<<"5th: " << str1 << endl;
    str1.push_back('i');
    cout<<"5th: " << str1 << endl;
    str1.pop_back();
    cout<<"5th: " << str1 << endl;


    return 0;
}