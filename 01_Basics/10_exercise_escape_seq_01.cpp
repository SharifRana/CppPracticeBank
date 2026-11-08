// Exercise for chapter 2 escape sequence
#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n\t I"              // Instead of tabs
         << "\n\n\t\t \"RUSH\" "    // you can send the 
         << "\n\n\n\t\t \\TO\\"     // suited number
         << "\n\n\t\t AND"          // of blanks to
         << "\n\n\t /FRO/" << endl; // the output
}