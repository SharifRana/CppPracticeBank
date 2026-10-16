#include <iostream>
using namespace std;
int main(){
    cout <<"+++++++++++++++++++++\n";
    cout <<"+ Even Digit Sum    +\n";
    cout <<"+++++++++++++++++++++\n";
    int n, sum = 0;
    cout << "Enter a number = ";
    cin >> n;
    cout << "Your entered number = "<<endl;
    while(n > 0){
        int d = n % 10;
        if(d % 2 == 0){
            sum += d;
        }
        n /= 10;
    }
    cout <<"Even sum = " << sum << endl;
    return 0;
}