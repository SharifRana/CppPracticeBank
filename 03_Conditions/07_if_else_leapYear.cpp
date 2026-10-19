#include <iostream>
using namespace std;

int main(){
    cout <<"++++++++++++++++++++++++++++++\n";
    cout <<"+   if else with Leap Year   +\n";
    cout <<"++++++++++++++++++++++++++++++\n";
    int year;
    cout <<"Enter Year = ";
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout << year << " is Leap Year\n";
    }else{
        cout << year << " is Normal Year\n";
    }
    return 0;
}