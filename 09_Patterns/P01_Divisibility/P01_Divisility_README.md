# Pattern: Divisibility

## সংজ্ঞা
    মূল Definition (প্যাটার্ন হিসেবে)
    Divisibility Pattern = এমন একটি সমস্যা-সমাধান কৌশল, যেখানে একটি সংখ্যা (n) অপর একটি সংখ্যা (d) দিয়ে সম্পূর্ণ বিভাজ্য কি না—তা Modulo (%) অপারেটর দিয়ে যাচাই করা হয়।

## Pattern: Divisibility
    Core:    n % d == 0
    Type:    Boolean Check (হ্যাঁ/না)

## Division Algorithm
    n = d × q + r
    যেখানে: 0 ≤ r < d
    Divisible হলে: r = 0
    তাই: n % d == 0

## Template
    cpp
    // মূল চেক
    if (n % d == 0) {
        // n, d দিয়ে বিভাজ্য
    } else {
        // বিভাজ্য নয়
    }

## Function হিসেবে
    cpp
    bool isDivisible(int n, int d) {
        if (d == 0) return false;    // ⚠️ Division by zero
        return d != 0 && n % d == 0;
    }


## গণিতে: একটি পূর্ণসংখ্যা n, অপর পূর্ণসংখ্যা d (d ≠ 0) দিয়ে বিভাজ্য হবে যদি—
    n = d × q    (কোনো পূর্ণসংখ্যা q-এর জন্য)
    অর্থাৎ, n-কে d দিয়ে ভাগ করলে ভাগশেষ শূন্য।

    উপাদানের নাম
    | চিহ্ন   | নাম                | উদাহরণ (3 \| 12)    |
    |---    |---                 |---                  |---|
    | a     | Divisor (ভাজক)    | 3                   |
    | b     | Dividend (ভাজ্য)    | 12                  |
    | k     | Quotient (ভাগফল)  | 4                   |
    | b % a | Remainder (ভাগশেষ) | 0                   |

    
    চিহ্ন: a | b
    পড়া: "a divides b" বা "a, b-কে বিভাজ্য করে"
    অর্থ: 3 | 12 মানে "3, 12-কে নিঃশেষে ভাগ করে" বা "12, 3 দিয়ে বিভাজ্য"।
    গাণিতিক রূপ:
    a | b  ⟺  b = a × k    (যেখানে k একটি পূর্ণসংখ্যা)
    অথবা:
    a | b  ⟺  b % a == 0

## Divisibility প্যাটার্নের গাণিতিক ভিত্তি
    ভাগ-ভাগশেষের সম্পর্ক
    যেকোনো ভাগকে এভাবে লেখা যায়:

    dividend = divisor × quotient + remainder
    n = d × q + r

## Divisibility-র শর্ত: r = 0
    d | n  ⟺  n = d × q  (কোনো r নেই)
    উদাহরণ:
    12 = 3 × 4 + 0   → 3 | 12 True

## মডুলার অ্যারিথমেটিকে Divisibility
    Modular arithmetic-এ:
    a ≡ b (mod m)  ⟺  m | (a - b)
    অর্থ: a এবং b-এর পার্থক্য m দিয়ে বিভাজ্য।
    উদাহরণ:
    17 ≡ 5 (mod 12)  ⟺  12 | (17-5) = 12 
    
    Divisibility-র প্যাটার্ন এখানে:
    n % m == 0  ⟺  n ≡ 0 (mod m)

## কখন এই Pattern চিনবেন? (Trigger Words)
    সমস্যায় যা দেখবেন	        Pattern
    -------------------------------------------
    "divisible by X"	  |  Divisibility
    "multiple of X"	      |  Divisibility
    "even / odd"	      |  Divisibility (d=2)
    "remainder"	          |  Divisibility
    "leaves no remainder" |	 Divisibility
    "FizzBuzz"	          |  Divisibility ×2
    "leap year"	          |  Divisibility ×3
    "prime check"	      |  Divisibility Loop

## Divisibility-র প্যাটার্ন কাঠামো (সারসংক্ষেপ)
    Divisibility Pattern
    │
    ├── Definition: a | b ⟺ b % a == 0
    │
    ├── Mathematical form: b = a × k (k integer)
    │
    ├── Properties:
    │   ├── Reflexive: a | a
    │   ├── Transitive: a|b, b|c ⟹ a|c
    │   ├── Linear: a|b, a|c ⟹ a|(bx+cy)
    │   └── Antisymmetric: a|b, b|a ⟹ a=b
    │
    ├── Special rules:
    │   ├── 2: last digit even
    │   ├── 3: digit sum divisible by 3
    │   ├── 5: last digit 0 or 5
    │   ├── 9: digit sum divisible by 9
    │   └── 11: alternating sum divisible by 11
    │
    ├── Connection to:
    │   ├── Modulo: n % d == 0
    │   ├── Modular arithmetic: n ≡ 0 (mod d)
    │   ├── Prime: only divisors 1 and p
    │   ├── GCD/LCM
    │   └── FizzBuzz, Leap Year, Prime check
    │
    └── Programming:
        ├── n % d == 0
        ├── n % 2 == 0 (even)
        ├── n % 3 == 0 (Fizz)
        └── n % 15 == 0 (FizzBuzz)

## Divisibility কেন "প্যাটার্ন"?
    কারণ:
    1.	পুনরাবৃত্ত: একই নিয়ম (n % d == 0) সব ক্ষেত্রে
    2.	সশর্ত: শর্ত পূরণ হলেই true
    3.	প্রত্যাশিত: একই ইনপুট → একই আউটপুট
    4.	সার্বজনীন: সব পূর্ণসংখ্যায় প্রযোজ্য
    5.	সংযোজিত: ছোট প্যাটার্ন থেকে বড় প্যাটার্ন (2, 3, 5 → 6, 15, 30)

## প্যাটার্ন হিসেবে এর শক্তি
    দিক	            ব্যাখ্যা
    ---------------------------------------
    সরলতা	        একটি মাত্র অপারেটর (%)
    সার্বজনীনতা	      সব ভাষায় একই
    সংমিশ্রণ	      একাধিক divisor একসাথে (15 = 3×5)
    প্রমাণযোগ্য	       গাণিতিকভাবে প্রমাণ করা যায়
    বাস্তব	           দৈনন্দিন সমস্যায় সরাসরি

## সংক্ষেপে
    Divisibility-র সংজ্ঞা:
    a | b  ⟺  b = a × k  ⟺  b % a == 0
    (যেখানে k পূর্ণসংখ্যা)

    প্যাটার্ন হিসেবে:
    - Input: দুটি সংখ্যা (a, b)
    - Rule: b % a == 0?
    - Output: true/false
    - Property: Reflexive, Transitive, Linear

    বিশেষ নিয়ম:
    - 2: শেষ অঙ্ক জোড়
    - 3: অঙ্কের যোগ 3-এর গুণ
    - 5: শেষ অঙ্ক 0 বা 5
    - 9: অঙ্কের যোগ 9-এর গুণ
    - 11: জোড়-বিজোড় অঙ্কের পার্থক্য

    প্রোগ্রামিং-এ:
    - জোড়-বিজোড়: n % 2 == 0
    - FizzBuzz: n % 3, n % 5, n % 15
    - Leap Year: n % 4, n % 100, n % 400
    - Prime: n % i == 0 (i = 2..√n)

    গাণিতিক ভিত্তি:
    - ভাগ-ভাগশেষ: n = d×q + r
    - Modular: n ≡ 0 (mod d)
    - Prime: divisor = {1, p}

    মূল কথা:
    Divisibility হলো পূর্ণসংখ্যার জগতে
    সবচেয়ে মৌলিক প্যাটার্ন—যা থেকে
    Prime, GCD, FizzBuzz, Leap Year,
    এমনকি Cryptography পর্যন্ত জন্ম নেয়।

## Divisibility Details 
    ২-২ প্যাটার্ন হিসেবে Divisibility এর Definition
    Folder Location: ..\Learning Plan Details\DSA & C++\Basic Learing\প্যাটার্ন শিখুন