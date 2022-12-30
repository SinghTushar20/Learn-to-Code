// Use the command to compile g++ ./main.cpp ./pattern.cpp -o pattern
// Use the command to run the program ./pattern.exe
#include <iostream>
#include "pattern.h"
using namespace std;


int main()
{   
    int (*(functions[]))(int) = {pattern1, pattern2, pattern3, pattern4, pattern5, pattern6, pattern7, pattern8, pattern9, pattern10, pattern11, pattern12, pattern13, pattern14, pattern15, pattern16, pattern17, pattern18, pattern19, pattern20, pattern21, pattern22, pattern23};
    while(true) {
        int i, n;
        cout<<"*******Pattern Machine******\n";
        cout<<"Enter the pattern number\n";
        cin>>i;
        if(i > sizeof(functions)/sizeof(functions[0])) {
            cout<<"Enter a valid input\n";
            continue;
        }
        cout<<"Enter the input size for the pattern\n";
        cin>>n;
        functions[i-1](n);
        char c;
        cout<<"Try Again? (y/n)\n";
        cin>>c;
        if(c == 'n') {
            cout<<"Byee\n";
            break;
        }
    }
    return 0;
}
