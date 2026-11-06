#include <iostream>
using namespace std;

void line(), message();     // prototypes

int main(){
    cout << "Hello! the program starts in main()." << endl;
    line();
    message();
    line();
    cout << "At the end of main()." << endl;

    return 0;
}

void line()     // To draw a line.
{    
    cout << "--------------------------------------" << endl;
}

void message()  // To display a message.
{
    cout << "In function message()." << endl;
}
