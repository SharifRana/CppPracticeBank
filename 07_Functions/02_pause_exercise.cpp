#include <iostream>
using namespace std;

void pause();   // prototype

int main(){
    cout << endl << "Dear reader, "
    << endl << "have a ";
    pause();
    cout << "!" << endl;

    return 0;
}

void pause()
{
    cout << "BREAK";
}