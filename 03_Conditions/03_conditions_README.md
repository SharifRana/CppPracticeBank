# Conditions

## Definition
    Conditions (Decision Making) is that process which decide the one way by checking between two or more condition.

## Pattern

    if(condition) -> true
    else -> false

    Condition Pattern:
    |___ Simple: marks >= 90
    |___ Compound: a && b, a || b, !a
    |___ Nested: if inside if
    |___ Ternary: a ? b : c
    |___ Switch: multiple case

##  Order of Conditions
    Order of Condition (Important) 
    |___ Narrow/Specific first
    |___ Board/ General later
    |___ Reason: If an earlier condition "swallows" a later one, the later condition becomes dead code.


## Algorithm
1. Evaluate the condition
2. True -> `if` block
3. False -> `else if` / `else` block
4. More then one condition -> `else if` ladder
5. Specified value -> `switch`

## Template 
    #include <iostream>
    using namespace std;
    
    int main(){
        int marks;
        cin marks;

        // if-else
        if(marks >= 40){
            cout << "Pass";
        }else{
            cout <<"Fail";
        }

        // else-if ladder (Big -> Small)
        if(marks >= 80) cout << "A+";
        else if (marks >= 60) cout << "B";
        else if (marks >= 40) cout << "C";
        else cout <<"F";

        // Ternary (in one line)
        string result = (marks >= 40) ? cout <<"pass" : cout <<"Fail";

        // Switch (Specific Value)
        int day = 1;
        switch (day){
            case 1: cout << "Sat"; break;
            case 2: cout << "Sun"; break;
            default: cout << "Invalid";
        }

        return 0;
    }

## Checklist
1. `else-if` order: big value first in condition
2. `break` mandatory in `switch`
3. `{}` use for block to avoid bug
4. Ternary: condition ? A : B

## Edge Case
1. Boundary: `>` vs `>=`
2. Negative: n % 2 == 1 avoid -> n % 2 != 0
3. 3+ class: `switch` or `else-if`


# গাণিতিক রূপ:
    C(x) → {true, false}

# কাঠামো:
    (Left Operand, Operator, Right Operand)



# প্যাটার্ন বৈশিষ্ট্য:
    - Boolean: শুধু দুটি মান
    - Deterministic: একই ইনপুট → একই ফল
    - Composable: && || ! দিয়ে
    - Short-circuit: বাম থেকে ডানে
    - Boundary-sensitive: >= বনাম >



## Conditons Details 
    File Name: ১০-১ C++ Condition (Decision Making) ৪ স্তরে সম্পূর্ণ বিশ্লেষণ + আপনার জন্য অগ্রাধিকার

    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing

    File Name: ৩-২ ৮টি README ফাইল সম্পূর্ণ নোট (Definition, Pattern, Algorithm, Template).docx
    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing\প্যাটার্ন শিখুন