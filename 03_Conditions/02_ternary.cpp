#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Binary Classification by ternary\n";
    cout << "Enter a number = ";
    cin >> n;
    cout << n << ((n % 2 == 0) ?  " Even" : " Odd") << endl;
}