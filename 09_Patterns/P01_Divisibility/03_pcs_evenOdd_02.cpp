// stage L1 for string understanding 
#include <iostream>
using namespace std;
int main(){
    int T, i;
    string n;
    cin >> T;

    for (i = 1; i <= T; i++){
        cin >> n;

        // last digit checking 
        int lastDigit = n.back() - '0';

        // Even / Odd check
        if (lastDigit % 2 == 0)
        cout << "even\n";
        else
        cout << "odd\n";
    }

    return 0;
}