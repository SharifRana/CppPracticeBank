// Defining and initializing variables 

#include <iostream>
using namespace std;

int main()
{
    float x = 123.456F,         // or double
          y = 76.453F,
          sum;

    sum = x + y;

    cout << "Total:         "
         << x << " + " << y << " = " << sum << endl;

    cout << "Difference:    "
         << x << " - " << y << " = " << (x - y) << endl;
    
    return 0;
}
