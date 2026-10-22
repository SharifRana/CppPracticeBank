#include <iostream>
using namespace std;
int main(){
    cout <<"|| Even Odd by Divisibility Basic ||\n";
    cout <<"====================================\n";
    int n;
    cout <<"Enter a number = ";
    cin >> n;
    //if(n != 0 && n%2 == 0){
    if(n%2 == 0){
        cout << n << " is an even number.\n";
    }else{
        cout << n << " is an odd number.\n";
    }
    return 0;
}