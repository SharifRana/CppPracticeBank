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
        int digit = n % 10; // for last digit
        cout << digit << " ";
        n = n / 10; // To omit the last digit.
    }
    
    return 0;
}
/* 
ভাগের মূল সূত্রঃ
a / b = q
এবং 
a = b * q + r
যেখানেঃ a = ভাজ্য (dividend) b = ভাজক (divisor) 
q = ভাগফল (quotient) ও r = ভাগশেষ (reminder)
Condition: 0 <= r < b
 */