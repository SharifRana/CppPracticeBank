#include <iostream>
using namespace std;
int n;
// Function
bool isPrime(int n) {
    if (n <= 1) return false;           // Condition
    if (n == 2) return true;            // Condition
    if (n % 2 == 0) return false;       // Condition (Modulo + Divisibility)
    for (int i = 3; i <= n/i; i += 2)   // Loop Condition
        if (n % i == 0) return false;   // Condition
    return true;
}

int main(){
    cin >> n;
    isPrime(n);
    
    return 0;
}