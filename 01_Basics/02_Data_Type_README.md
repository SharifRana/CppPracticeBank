# Data_Type: Variables

## Definition
    The declaration of a variable means which type of data will stored it call Data Type. C++ has some instruction and type for each variable. 
- Type:
    Primitive: int, long long, float, double, char, bool
    Derived: Array, String, Pointer
    User-defined: Struct, Class

## Pattern

    `Type Name = value;`

    Data Type:
    |__ Primitive
    |___|
    |   |___Integer: int, long long
    |   |___Float: float, double
    |   |___Character: char
    |   |___Boolean: bool
    |
    |___Derived 
    |   |___Array
    |   |___String
    |   |___Pointer
    |
    |___User-defined
        |___struct
        |___class

## Algorithm (Choose the right Data Type)
1. Decide the range of Data
2. Digit or Character or True/False?
3. For digit:
    - Small digit (<10^9): int
    - Big digit (<10^18): long long
    - Too big digit (100+ digit): string
4. For fraction:
    - Lees accurate: float
    - More accurate: double
5. For Character: char
6. For Text: string
7. For condition or True/False: bool

## Template
    #include <iostream>
    #include <string>
    using namespace std;

    int main(){
        int age = 25;
        double price = 99.50;
        char grade = 'A';
        bool isPassed = true;
        string name = "Anas Abdullah";

        cout << age << endl;
        cout << price << endl;
        cout << grade << endl;
        cout << isPassed << endl;
        cout << name << endl;

        return 0;
    }

## Checklist
    Select by range
    Overflow will be occurrence?
    long long is needed?
    For decimal fraction double used or not?

