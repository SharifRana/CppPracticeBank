#include <iostream>
using namespace std;
int main(){
    int op;
    int n;
    do {     
        cout << "+++++++++++++++++++++++++++\n";
        cout << "+ Divisibility Variations +\n";
        cout << "+++++++++++++++++++++++++++\n";
        
        cout << "Enter expression by Number \n";
        cout << "1) Odd Even Check \n";
        cout << "2) Divisibility by 3 \n";
        cout << "3) Divisibility by  \n";
        cout << "4) Binary Classification by ternary \n";
        cout << "0) To Exit \n";

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
                cout << "This is Even Num = " << n << endl;
            }else{
                cout << "This is Odd Num = " << n << endl;
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
            break;
        case 3:
            cout << "Multiple Conditions \n";
            cout << " Enter a number = ";
            cin >> n;        
            if(n % 2 == 0 && n % 3 == 0)
            {
                cout << n << " Is divisibility by 6\n";
            }else{
                cout << n << " Is not divisibility by 6 " << n;
            }
            break;
        case 4:
            cout << "Binary Classification by ternary \n";
            cout << " Enter a number = ";
            cin >> n;
            cout << n << ((n % 2 == 0) ?  " Even " : " Odd") << endl;
            
        default:
            break;
        }
    }while(op != 0);
   return 0; 
}