// Outputs three random numbers
#include <iostream>
#include <cstdlib>

// Declaration of cin and cout
// Prototypes of srand(), rand():
// void srand ( unsigned int seed ) ;
// int rand( void );

using namespace std;
int main()
{
    unsigned int seed;
    int z1, z2, z3;

    cout << " --- Random Numbers --- \n" << endl;
    cout << "To initialized the random number generator, "
         << "\n please enter an integer value: ";
    cin >> seed;    // Input an integer

    srand(seed);    // Compute three random numbers.
                    // new sequence of random numbers.
    
    z1 = rand();    // Compute three random numbers.
    z2 = rand();
    z3 = rand();

    cout << "\nThree random numbers: "
         << z1 << "     " << z2 << "    " << z3 << endl;

    return 0;

}

