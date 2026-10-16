#include <iostream>
using namespace std;
int main(){
    cout <<"+++++++++++++++++++++\n";
    cout <<"+  Digit Sum        +\n";
    cout <<"+++++++++++++++++++++\n";
    int n, sum = 0;
    cout <<"Enter number = ";
    cin >> n ;
    cout << "Your entered number = " << n << endl;
    while(n > 0){
        sum += n % 10;
        n/=10;
    }
    cout << " Result = "<< sum << endl;
}
