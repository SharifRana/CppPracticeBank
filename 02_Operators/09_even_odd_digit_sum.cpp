#include <iostream>
using namespace std;
int main(){
    cout <<"++++++++++++++++++++++++\n";
    cout <<"+ Even & Odd Digit Sum +\n";
    cout <<"++++++++++++++++++++++++\n";
    int n, e_sum = 0, o_sum = 0;
    cout <<"Enter a number = ";
    cin >> n;
    cout <<"Your entered number = "<< n << endl;
    while(n > 0){
        int d = n % 10;
        if(d % 2 == 0){
            e_sum += d;
        }else if(d % 2 != 0){
            o_sum += d;
        }
        n /= 10;
    }
    cout <<"Even sum = " << e_sum << endl;
    cout <<"Odd sum = " << o_sum << endl;

return 0;
}