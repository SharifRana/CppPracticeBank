#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"++++++++++++++++++++++++\n";
    cout <<"+ Factorial            +\n";   
    cout <<"++++++++++++++++++++++++\n";
    cout <<"Enter a number = ";
    cin >> n;
    cout <<"Your entered number = "<< n << endl;
    long long fact = 1;
    for(int i = 1; i <= n; i++){
        cout << "i = " << i << endl;
        fact *= i;
        cout << "i = " << i << " & fact = " << fact << endl;

    }
    cout << n << "! = " << fact << endl;
    return 0;
}