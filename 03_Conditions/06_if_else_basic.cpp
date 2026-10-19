#include <iostream>
using namespace std;
int main(){
    cout <<"+++++++++++++++++++++\n";
    cout <<"+   if else basic   +\n";
    cout <<"+++++++++++++++++++++\n";

    float marks;
    cout <<"Enter your marks = ";
    cin >> marks;
    // if else single line without {}
    if (marks >= 40) cout <<"You are pass with "<< marks << "\n";
    else cout <<"You failed with " << marks << "\n" << endl;

    // if else multi line with block of code using {}
    if (marks >=80 && marks <=100){
        cout <<"Your grade is A+ \n";
    }else if(marks >=70 && marks < 80){
        cout <<"Your grade is A \n";
    }else if(marks >=60 && marks < 70){
        cout <<"Your grade is A- \n";
    }else if(marks >=40 && marks < 50){
        cout <<"Your grade is D \n";
    }else{
        cout <<"Your grade is F \n";
    }
    return 0;
}