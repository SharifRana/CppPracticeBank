# Operator: Arithmetic and Logical Operators

## Definition 
Operator is a special symbol which work between two operand and gives a result. 

- Type:
    Arithmetic: + - / %
    Relational: == != < > <= >=
    Logical: && || !
    Assignment: = += -= *= /=
    Increment/Decrement: ++ --
    Bitwise: & | ^ ~ << >>

## Pattern
    `operand1 operator operand2 -> result`

    Operator Pattern:
    |
    |___ Arity
    |    |___ Unary: -a, !x, ++i
    |    |___ Binary: a+b, a%b
    |    |___ Ternary: a ? b : c
    |
    |___ Precedence
    |    |___ () []
    |    |___ ++ -- !
    |    |___ * / %
    |    |___ < > <= >=
    |    |___ == !=
    |    |___ &&
    |    |___ ||
    |    |___ = += -=
    |
    |___ Associativity
         |___ Left -> Right: + - * /
         |___ Right -> Left: = += 


## Algorithm (Expression)
    Algorithm and Precedence are same things here
    NB: Same priority operator Left -> Right

## Template:

    #include <iostream>
    using namespace std;
    
    int main(){
        int a = 17, b = 5;

        // Arithmetic
        cout << a + b << endl;      // 22
        cout << a - b << endl;      // 12
        cout << a * b << endl;      // 85
        cout << a / b << endl;      // 3 (int)
        cout << a % b << endl;      // 2 

        // Relational
        cout << (a > b) << endl;    // 1
        cout << (a == b) << endl;   // 0

        // Logical 
        bool x = true, y = false;
        cout << (x && y) << endl;   // 0
        cout << (x || y) << endl;   // 1
        cout << (!x) << endl;       // 0

        // Assignment
        a += 5                      // a = 22
        a *= 2                      // a = 44

        // Increment 
        int i = 5;
        cout << i++ << endl;        // 5 (post)
        cout << ++i << endl;        // 7 (pre)

        // Ternary
        int max = (a > b) ? a : b;

        return 0;
    }


## Divisibility Template

    if (n % d == 0){ /* d | n */}
    if (n % 2 == 0){ /* even */}

## Checklist
    = and == use correctly?
    Precedence correct?
    Integer division known?
    Overflow risk?


## Operator Details 
    File Name: ৮-২ C++ Operators ৪ স্তরে সম্পূর্ণ বিশ্লেষণ + আপনার জন্য অগ্রাধিকার
    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing


    File Name: ৩-২ ৮টি README ফাইল সম্পূর্ণ নোট (Definition, Pattern, Algorithm, Template).docx
    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing\প্যাটার্ন শিখুন