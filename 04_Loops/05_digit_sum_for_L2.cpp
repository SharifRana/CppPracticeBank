
#include <iostream>
using namespace std;



bool isPrime(int n){
    if(n <=1) return false;

    for(int i=2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    cout << "+++++++++++++++++++++++++++++\n";
    cout << "+   Prime Check Basic Loop  +\n";
    cout << "+++++++++++++++++++++++++++++\n";
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "The entered number is: " << n << endl;
    if(isPrime(n)){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    cout << "The number " << n << (isPrime(n) ? " is prime." : " is not prime.") << endl;
}
