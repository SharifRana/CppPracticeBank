#   Strings

##  Definition:
    A string, that is, an object belonging to the string class, can be initialized when you define it using:
    # a predefined string constant
    # a certain number of characters
    # a predefined string or part of string

    - C++ string: dynamic, safe, easy
    - C-style char[]: end with \0, complex

##  Pattern:
    `string s = "Hello";`

    String Pattern:
    |___ Declaration: string s = "Hello";
    |___ Access: s[i]   (0 <= i < n)
    |___ Length: s.size()
    |___ Last char: s.back()
    |___ Concatenate: s1 + s2
    |___ Compare: s1 == s2
    |___ Substring: s.substr(pos, len)
    |___ Find: s.find("x")
    |___ Reverse: reverse(s.begin(), s.end())

    Memory (C-style)
    Index:  0   1   2   3   4   5 
    Char:   H   e   l   l   o   \0

## Algorithm:
1. String declare + init -> Input: string s; cin >> s;
2. Length: `s.length()` -> (int len = s.size();)
3. Index: `s[i]` (0-based)
4. Traverse: `loop` or `range-based` -> for(char c : s) / for (int i = 0; i < len; i++)
5. Manipulate: `+=`, `substr`, `find`
6. Last char: char last = s.back();
7. Palindrome: two pointer (l = 0, r = n - 1) 
8. Reverse: reverse(s.begin(), s.end())
9. Count char: count frequency


## Template
    #include <iostream>
    #include <string>
    #include <algorithm>
    using namespace std;

    int main(){
        // Declare + init + input
        string s; // string s = "Hello";
        cin >> s; 

        // Length 
        int len = s.size(); // cout << s.length() << endl; // 5
        cout << "Length: " << len << endl; 

        // Access by Index
        cout << "First: " << s[0] << endl;      // H
        cout << "Last: " << s.back() << endl; 

        // Traverse
        for (int i = 0; i < len; i++){
            cout << s[i] << " ";
        }
        cout << endl;

        // Concatenate
        string s2 = s + " World";

        // Comparison
        if (s == "Hello") cout << "Match\n";

        // Substring
        cout << s.substr(0, 3) << endl; 

        // Find
        int pos = s.find("ell");

        // Reverse
        reverse(s.begin(), s.end());
         cout << s << endl; 

         // Range-based (C++ 11)
         for (char c : s){
            cout << c; 
         }

        // Input with space
        string name;
        getline(cin, name);
        
        return 0;
    }
    
## Palindrome check (Two Pointer):
    l = 0, r = n-1
    while (l < r):
        if s[1] != s[r]: return false
        l++, r--
    return true

## Palindrome Template:
    bool isPalindrome(string s){
        while(l < r){
            if (s[l] != s[r]) return false;
            l++, r--;
        }
        return true;
    }

## Test Case with Loop:
    int T;
    cin >> T;
    while (T--){
        string s;
        cin >> s;
        cout << (isPalindrome(s) ? "Yes" : "No") << endl;
    }

## Checklist
    = vs == not confused?
    Out of bounds avoided?
    Case sensitivity check?
    Empty string check?

## Operation & Complexity
    Operation       Time
    Access s[i]     O(1)
    Length          O(1)
    Concatenate     O(n+m)
    Comparison      O(min(n,m))
    Substring       O(k)
    Find            O(n*m)
    Reverse         O(n)
    