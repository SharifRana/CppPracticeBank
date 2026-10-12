#include <iostream>
using namespace std;
int main(){
    cout << "++++++++++++++++++++++++++++++++\n";
    cout << "+   Modulo use to Reverse num  +\n";
    cout << "++++++++++++++++++++++++++++++++\n" << endl;
    int n = 1234;
    int reverse = 0;
    while (n > 0){
        int digit = n % 10;
        reverse =  reverse * 10 + digit;
        n = n / 10;
    }
    cout << reverse;
}