#include <iostream>
using namespace std;
int main(){
    int op;
    int n;

    cout << "+++++++++++++++++++++++++++\n";
    cout << "+ Divisibility Variations +\n";
    cout << "+++++++++++++++++++++++++++\n";
    
    cout << "Enter expression : \n";
    cout << "Odd Even Check = 1 \n";
    cout << "Divisibility by 3 = 2\n ";
    cin >> op; 

    switch (op)
    {
    case 1:
        /* code */
        cout << "Odd or Even Check: \n";
        cout << "Enter a number = ";
        cin >> n;
        if(n % 2 == 0)
        {
            cout << "This is Even Num = " << n;
        }else{
            cout << "This is Odd Num = " << n;
        }
        break;
    case 2:
        cout << "Divisibility by 3: \n";
        cout << "Enter a number = ";
        cin >> n;
        if(n % 3 == 0)
        {
            cout << n << " Is divisibility by 3 \n";
        }else{
            cout << n << " Is not divisibility by 3 \n";
        }
    default:
        break;
    }
    
}