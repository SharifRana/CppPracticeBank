#include <iostream>
using namespace std;


int main(){
    cout <<"++++++++++++++++++++++++++++++++++++++\n";
    cout <<"+ Modulo Properties with Last digit  +\n";
    cout <<"++++++++++++++++++++++++++++++++++++++\n";

    int n = 5674;
    int lastDigit = n % 10 ;
    cout << "The last digit of " << n <<  " is = " << lastDigit << endl;
}