#include <iostream>
using namespace std;
int main()
{
    cout <<"+++++++++++++++++++++\n";
    cout <<"+ Positive Negative +\n";
    cout <<"+++++++++++++++++++++\n";
    int n;
    cout << "Enter a number = \n";
    cin >> n;
    if (n > 0) cout << "Positive";
    else if (n < 0) cout << "Negative";
    else cout << "Zero";
}