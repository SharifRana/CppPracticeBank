#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int n = 195;
    while(n > 0){
        sum += n % 10;
        //cout << sum << " " << endl;
        n /= 10;
        cout << sum << " ";
    }

    return 0;
}