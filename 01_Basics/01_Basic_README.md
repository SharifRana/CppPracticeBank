# Basics: C++ Program Structure 

## Definition
- Characteristics of C++
    C++ is not a purely object-oriented language but a hybrid that contains the functionality of the C programming language. This means that you have all the features that are available
- in C:
    ■ universally usable modular programs
    ■ efficient, close to the machine programming
    ■ portable programs for various platforms.
The large quantities of existing C source code can also be used in C++ programs.
    C++ supports the concepts of object-oriented programming (or OOP for short),
- which are:
    ■ data abstraction, that is, the creation of classes to describe objects
    ■ data encapsulation for controlled access to object data
    ■ inheritance by creating derived classes (including multiple derived classes)
    ■ polymorphism (Greek for multiform), that is, the implementation of instructions that can have varying effects during program execution.

Various language elements were added to C++, such as references, templates, and exception handling. Even though these elements of the language are not strictly object-oriented programming features, they are important for efficient program implementation.

C++ program is a set of instruction which stared with `main()` function. And contains all kind of header, namespace, main function, and return statement. 

## Pattern
- Basic structure of all kind of C++ program
#include-> using namespace -> int main() -> {body}-> return 0;

## Algorithm
1. `#include<iostream>` - I/O header
2. `using namespace srd;` - std namespace
3. `int main() {` - entry point
4. `cout << ...;` - Output
5. `cin >> ...;`  - Input
6. `return 0;`    - Successful end
7. `}`            - Main end

## Template

    #include <iostream>
    using namespace std;

    int main(){
        // Variable Declaration
        int n; 

        // Input
        int n;
        cin >>n;

        // Process 
        int result = n * 2;

        // Output
        cout <<"The Result = " << result << endl;
        
        return 0;
    }

## Fast I/O Template (Competitive)
    #include <iostream>
    using namespace std;

    int main(){
        ios::sync_with_stdio(false);
        cin.tie(nulptr);

        int T;
        cin >> T;
        while(T--){
            // solve
        }
        return 0;
    }

## Checklist
    header ok?
    main() available?
    `;` semicolon in each statement?
    return 0; Ok?
    Input/Output are right?

