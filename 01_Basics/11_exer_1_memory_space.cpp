// Exercise 1 from Chapter 2: 
//A program that display each fundamental type occupied memory space 
#include <iostream>
using namespace std;

int main()
{
    cout << "\n Size of Fundamental Types\n"
         << "Type           Number of Bytes\n"
         << "--------------------------------" << endl;

    cout << "char :         "<< sizeof(char) << endl;
    cout << "short :        "<< sizeof(short) << endl;
    cout << "int :          "<< sizeof(int) << endl;
    cout << "long:          "<< sizeof(long) << endl;
    cout << "float:         "<< sizeof(float)<< endl;
    cout << "double:        "<< sizeof(double)<< endl;
    cout << "long double:   "<< sizeof(long double)<< endl;
    
    return 0;
}
