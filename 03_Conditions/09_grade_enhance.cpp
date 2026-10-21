#include <iostream>
#include <string>
using namespace std;
int main(){
    string grade;
    int marks;
    string message;
    cout <<"+++++++++++++++++++++++++++++\n";
    cout <<"+ Grade Calculator Enhanced +\n";
    cout <<"+++++++++++++++++++++++++++++\n";
    // Input marks
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    // Validation for marks
    if (marks <0 || marks > 100) {
        cout << "Invalid marks entered. Please enter between 0 - 100./n";
        return 1; // Exit the program with an error code
    }

    // Determine grade based on marks
    if (marks >= 80) {
        grade = "A+"; // Assign grade as string
        message = "Excellent!";
    } else if (marks >= 70) {
        grade = 'A';
        message = "Very Good!";
    } else if (marks >= 60) {
        grade = 'B';
        message = "Good!";
    } else if (marks >= 50) {
        grade = 'C';
        message = "Average!";
    } else if (marks >= 40) {
        grade = 'D';
        message = "Pass!";
    } else {
        grade = 'F';
        message = "Fail!";
    }

    // Output the grade and message
    cout << "\n ========== Result ========== \n";
    cout << "Marks: " << marks << endl;
    cout << "Your grade is: " << grade << endl;
    cout << "Message: " << message << endl;

    // Grade_TC need to be implemented next time.
    return 0;
}