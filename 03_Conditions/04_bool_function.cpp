#include <iostream>
using namespace std;

int n;
bool isEven(int a) {
    return a % 2 == 0;
}

int main(){
    
    cout << "++++++++++++++++++++++++++++++++\n";
    cout << "+ Bool Function with condition +\n";
    cout << "++++++++++++++++++++++++++++++++\n" << endl;
    cout <<"Enter a number = ";
    cin >> n;
    
    if (isEven(n)){
        cout << n <<" is Even number." << endl;
    }else{
        cout << n <<" is Odd number." << endl;
    }

    return 0;
}