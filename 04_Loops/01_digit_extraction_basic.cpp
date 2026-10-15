#include <iostream>
using namespace std;
int main(){
    int n = 1527;
    while(n > 0){
        cout << "Startin with = " << n << " and reminder = ";
        int digit = n % 10;
        cout << digit << " " << endl;
        n /= 10;
    }
}