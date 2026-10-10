#include <iostream>
using namespace std;
int main(){
    cout << "+++++++++++++++++++++++++++++++++++\n";
    cout << "+ Modulo use for find each number +\n";
    cout << "+++++++++++++++++++++++++++++++++++\n";
    int n;
    cout << "Enter number = ";
    cin >> n;
    while (n > 0)
    {
        /* code */
        int digit = n % 10; // for last digit
        cout << digit << " ";
        n = n / 10; // To omit the last digit.
    }

    return 0;
}