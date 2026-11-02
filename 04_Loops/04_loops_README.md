# Loops 

## Definition
    Loop is a control structure, which run a code block based on  specified number of times or against a condition many of times.

## Pattern 

    Loop Pattern:
    |___ for: Specific number of times repeat
    |         for (inti; conditions; update){ body }
    |___ while: Based on condition
    |          while(conditions) { body; update; }
    |___ do-while: Minimum one time
    |          do { body; } while ( condition );
    |___ nested: Loop inside loop

    Common Patterns:
    |___ Counting: count ++
    |___ Summing: sum += x
    |___ Max/Min: if (x > max) max = x;
    |___ Searching: if (arr[i] == key) break;
    |___ Reverse: for (i = n -1; i >= 0; i--)
    |___ Filtering: if (cond) ...

## Algorithm
1. Decide loop repetition
2. Initialization writing
3. Condition limit writing
4. Body writing
5. Update writing (increment/decrement)
6. Off-by-one verification
7. Trace table practice
    | Step | i | condition | output |
8. Edge case (n = 0) testing

**for**: init -> condition -> body -> update -> repeat
**while**: condition -> body -> update -> repeat
**do-while**: body -> condition -> repeat

## Execution Flow:
    Init -> Condition? -> Body -> Update -> Condition? -> ... -> Stop
    (false -> stop)

## Template
    #include <iostream>
    using namespace std;

    int main(){
        // for loop: Specific number of times repeat 
        for(int i = 0; i < 5; i++){
            cout << i << " "; 
        }
        cout << endl;

        // while loop: based on condition
        int j = 0;
        while( j < 5){
            cout << j << " "; 
            j++;
        }
        cout << endl;

        // do-while: run minimum one time
        int k = 0;
        do{
            cout << k << " ";
            k++;
        } while (k < 5);

        return 0;
    }

## Common Patterns:
    // Sum
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    // Cont even
    int count = 0;
    for (int = 0; i < n; i++)
        if(arr[i] % 2 == 0) count++;

    // Max
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal) maxVal = arr[i];

    // Linear search
    int pos = -1;
    for (int i = 0; i < n; i++){
        if (arr[i] == key) { pos = i; break;}
    }

    // Reverse
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";

    // Nested (pattern printing)
    for (int i = 1; i <= n; i++ ){
        for(int j = 1; j <= i; j++){
            cout <<"* ";
        }
        cout << endl; 
    }

## Test Case Loop:
    int T;
    cin >> T;
    while (T--){
        // solve
    }

## Checklist
    `for` Initialization, condition, update is ok?
    `while` if forget update infinite loop
    `do-while` use `;` must have
    `break` stop the loop
    `continue` skip the block or condition
    Off-by-one avoid?
    Infinite loop avoid?
    Trace table builded?
    Edge case (n=0)?

## Loop Details 
    File Name: 

    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing

    File Name: ৩-২ ৮টি README ফাইল সম্পূর্ণ নোট (Definition, Pattern, Algorithm, Template).docx
    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing\প্যাটার্ন শিখুন