#include <iostream>
using namespace std;
int main(){
    cout <<"++++++++++++++++++++\n";
    cout <<"+ Grade Calculator +\n";
    cout <<"++++++++++++++++++++\n";

    char grade;
    int marks;
    cout << "Enter your number = ";
    cin >> marks;

    if(marks >= 80) cout << grade = 'A+';
    else if(marks >=70) cout << grade = 'A';
    else if(marks >=60) cout << grade = 'B';
    else if(marks >=50) cout << grade = 'C';
    else if(marks >=40) cout << grade = 'D';
    else cout << grade = 'F';
}