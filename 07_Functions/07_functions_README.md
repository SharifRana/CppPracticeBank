#   Functions

##  Definition
- Function is named code block which perform specific task, and it can take parameters also able to returns value.
- Function can be defined in any order, however, the first function is normally `main`. This makes the program easier to understand, since you star reading at the point where the program starts to execute.
    The `function` test() is shown opposite as an example and followed by the general from of a function. The example can be read as follows:

    => `Type`   is the function type, that is the type of return value.

    => `name`   is the function name, which is formed like a variable name and should indicate the purpose of the function.

    => `declaration_list`   contains the names of parameters and declares their types. The list can be empty, as for the function `main()`, for example. A list of declarations that contains only the word `void` is equivalent to an empty list.

- The `parameters` declared in a list are no more than local variables. They are created when the function is called and initialized by the values of the `arguments`.

## Pattern:
    return_type function_name (parameters){
        // body
        return value;
    }

    Function Pattern:
    |___ Declaration: int add(int a, int b);
    |___ Definition: int add(int a, int b){ return a + b; }
    |___ Call: add(3, 5)
    |___ Types
          |___ Return: Has return / No return (int vs void)
          |___ Parameter: Has Parameter / No Parameter
          |___ Built-in / User-defined
          |___ Recursive / Iterative
          |___ Pure / Impure
    
    Flow: Call -> Parameters receive -> Body -> Return -> Caller

## Algorithm:
    Phase 1: Design
1. Define the purpose of a function
2. Choose a name (verb + noun: isPrime, getGrade)
3. Determine parameters (inputs)
4. Determine return type (outputs)
    Phase 2: Implementation
5. Declare the function (prototype)
6. Define the function (body + return)
7. Call the function (from main)
    Phase 3: Verification
8. Use the return value
9. Test edge case

## Template
    #include <iostream>
    #include <string>
    using namespace std;

    // 1. Simple and void function (no return)
    void greet(){
        cout << "Hello!" << endl;
    }

    // 2. Void function with parameter
    void greetName(string name){
        cout << Hello, " << name << "!" << endl; 
    }

    // 3. Basic function with return value 
    int add( int a, int b){
        return a + b;
    }

    // 4. Boolean function (Binary classification)
    bool isEven(int n){
        return n % 2 == 0;
    }

    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i <= n / i; i +=2){
            if (n % i == 0) return false;
        }
        return true;
    }

    // 5. Default parameter
    int power(int base, int exp = 2){
        int result = 1;
        for (int i = 0; i < exp; i++){
            result *= base;
        }
        return result;
    }

    // 6. Grade function
    char getGrade(int marks) {
        if (marks >= 80) return 'A+';
        if (marks >= 70) return 'A';
        if (marks >= 60) return 'B';
        if (marks >= 50) return 'C';
        if (marks >= 40) return 'D';
        return 'F';
    }

    // 7. Recursive function
    long long factorial (int n) {
        if (n <= 1) return 1; // base case
        return n * factorial(n - 1); // recursive call
    }

    // 8. Array parameter (with size)
    int sumArray(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }

    int main() {
        // Call function
        greet();                // Hello
        greetName("Sharif");    // Hello, Sharif!
        cout << add(5, 3) << endl;    // 8
        cout << isEven(10) << endl;   // 1 (boolean value true)
        cout << isPrime(7) << endl;   // 1 (boolean value true)
        cout << getGrade(85) << enld; // A+
        cout << factorial(5) << endl; // 120
        cout << power(5) << endl;     // 25
        cout << power(5, 3) << endl;  // 125

        int arr[5] = {1, 2, 3, 4, 5};
        cout << sumArray(arr, 5) << endl; // 15

        return 0;
    }

## Palindrome (Function + String):
    bool isPalindrome(string s){
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }

## Test Case Loop + Function:
    int main() {
        int T;
        cin >> T; 
        while (T--) {
            int n;
            cin >> n; 
            cout << (isPrime(n) ? "Prime" : "Nor Prime") << endl;
        }
        return 0;
    }

## Checklist
    Return type?
    Parameters?
    Recursion base case?
    Array size pass?
    Function name with meaning?
    Edge case tested?