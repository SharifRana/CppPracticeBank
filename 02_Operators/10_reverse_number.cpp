#include <iostream>
using namespace std;
int main(){
    cout <<"++++++++++++++++++++++++\n";
    cout <<"+ Reverse Number       +\n";
    cout <<"++++++++++++++++++++++++\n";
    int n, rev = 0;
    cout <<"Enter a number = ";
    cin >> n;
    cout <<"Your entered number = "<< n << endl;
    while(n > 0){
        int d = n % 10;
        rev = rev * 10 + d;
        /*
        debugging print
        cout <<"Digit = "<< d << endl;
        cout <<"Reversed number = "<< rev << endl;
        */
        n = n / 10;
    }
    cout <<"Reversed number = "<< rev << endl;
return 0;
}