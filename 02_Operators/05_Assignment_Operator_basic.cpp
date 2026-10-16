#include <iostream>
using namespace std;
int main(){
    
    int a = 10;
    int temp = a; // Store the original value of a in a temporary variable
    int b = 20;
    
    cout << "Swapping values using assignment operator without using a temporary variable" << endl;
    cout << "Before assignment: a = " << a << ", b = " << b << endl;

    // Using assignment operator
    a = b; // Assign the value of b to a

    cout << "After assignment: a = " << a << ", b = " << b << endl;
    b = temp; // Restore the original value of a to b
    cout << "After assignment temp: a = " << a << ", b = " << b << endl;

    int x = 20;
    cout << "Initial value of x: " << x << endl;
    x += 10;
    cout << "After x += 10: " << x << endl;
    x *= 2;
    cout << "After x *= 2: " << x << endl;
    x -= 30;
    cout << "After x -= 30: " << x << endl;
    x /= 5;
    cout << "After x /= 5: " << x << endl;
    x %= 4;
    cout << "After x %= 4: " << x << endl;


    return 0;
}