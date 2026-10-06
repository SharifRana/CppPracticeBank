#include <iostream>
using namespace std;
int main()
{
    cout << "+++++++++++++++++++++++++++++++++++++\n";
    cout << "+ Arithmetic Operators & Calculator +\n";
    cout << "+++++++++++++++++++++++++++++++++++++\n" << endl;
    int num_1, num_2, result;
    char op;
    //cout << "Sum (+)\n";
    cout << "Enter 1st Num = " << endl;
    cin >> num_1;
    cout << "Enter 2nd Num = " << endl;
    cin >> num_2;
    cout << "Choose Operation = " << endl;
    cin >> op;
    /*result = num_1 + num_2;
    cout << "Result of Sum = " << result << endl;
    */
    cout << "Calculator with if else condition\n";
    if(op == '+') cout << "Result of Sum = " << num_1 + num_2 << endl;
    else if(op == '-') cout << "Result of Diff = " << num_1 - num_2 <<endl;
    else if(op == '*') cout << "Result of Multi = " << num_1 * num_2 <<endl;
    else if(op == '/') cout << "Result of Multi = " << (double)num_1 / num_2 <<endl;
    
    return 0;
}
