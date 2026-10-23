## 	Operator	এখন শিখবেন?	কারণ
    ১	Arithmetic	    ✅ এখনই	সব প্রোগ্রামে দরকার
    ২	Relational	    ✅ এখনই	Condition-এর ভিত্তি
    ৩	Logical	        ✅ এখনই	Condition-এর ভিত্তি
    ৪	Assignment	    ✅ এখনই	Variable-এ মান বসাতে
    ৫	Bitwise	        ❌ পরে	Advanced, DSA-তে লাগবে
    ৬	Miscellaneous	⚠️ আংশিক	sizeof, ?: এখন
    ৭	Precedence	    ⚠️ বেসিক	শুধু মূল নিয়ম
    ৮	Associativity	❌ পরে	জটিল, পরে
    ৯	Overloading	    ❌ অনেক পরে	OOP শেখার পর
    ১০	Type Casting	⚠️ বেসিক	শুধু মূল ধারণা

## সিনট্যাক্স (কীভাবে লিখতে হয়)
    cpp
    int a = 10, b = 3;

    int sum = a + b;      // যোগ → 13
    int diff = a - b;     // বিয়োগ → 7
    int prod = a * b;     // গুণ → 30
    int quot = a / b;     // ভাগ → 3 (পূর্ণসংখ্যা!)
    int rem = a % b;      // ভাগশেষ → 1

    // Increment/Decrement
    a++;    // a = a + 1
    a--;    // a = a - 1
    ++a;    // a = a + 1 (আগে বাড়ায়)
    --a;    // a = a - 1 (আগে কমায়)
    সিনট্যাক্স চিহ্ন:
    চিহ্ন	নাম
    +	Plus
    -	Minus
    *	Asterisk (গুণ)
    /	Slash (ভাগ)
    %	Modulus (ভাগশেষ)
    ++	Increment
    --	Decrement
## ধারণা (কেন এভাবে লিখতে হয়)
    কেন * গুণের জন্য, × নয়?
    •	কীবোর্ডে × নেই
    •	* সব কীবোর্ডে আছে
    •	প্রোগ্রামিংয়ের ঐতিহাসিক স্ট্যান্ডার্ড

    কেন / পূর্ণসংখ্যা দেয়?
    cpp
    int a = 10, b = 3;
    cout << a / b;    // 3 (3.33 নয়!)
    কারণ: দুটো int ভাগ করলে ফলাফলও int। দশমিক চাইলে:
    cpp
    double result = (double)a / b;    // 3.33

    কেন % দরকার?
    •	জোড়-বিজোড় চেক: n % 2 == 0
    •	সংখ্যার শেষ অঙ্ক: n % 10
    •	চক্রীয় কাজ: i % 7

    i++ vs ++i—কেন দুটো?
    cpp
    int a = 5;
    int b = a++;    // b = 5, a = 6 (পরে বাড়ে)
    int c = ++a;    // a = 7, c = 7 (আগে বাড়ে)

## Relational Operators (তুলনামূলক অপারেটর)
    স্তর ১: সিনট্যাক্স
    cpp
    int a = 10, b = 5;

    bool r1 = (a == b);    // সমান? → false
    bool r2 = (a != b);    // অসমান? → true
    bool r3 = (a > b);     // বড়? → true
    bool r4 = (a < b);     // ছোট? → false
    bool r5 = (a >= b);    // বড়/সমান? → true
    bool r6 = (a <= b);    // ছোট/সমান? → false

    চিহ্ন:
    চিহ্ন	নাম
    ==	Equal to
    !=	Not equal
    >	Greater than
    <	Less than
    >=	Greater or equal
    <=	Less or equal

    স্তর ২: ধারণা
    কেন == (দুইবার), = (একবার) নয়?
    text
    =  → Assignment (মান বসানো)
    == → Comparison (তুলনা করা)

    ভুল:
    cpp
    if (a = 5) { }    // ❌ a-তে 5 বসাল, সবসময় true

    সঠিক:
    cpp
    if (a == 5) { }   // ✅ তুলনা

    ফলাফল সবসময় bool:
    cpp
    cout << (10 > 5);    // 1 (true)
    cout << (10 < 5);    // 0 (false)

## Logical Operators (লজিক অপারেটর)
    স্তর ১: সিনট্যাক্স
    cpp
    bool a = true, b = false;

    bool r1 = a && b;    // AND → false (দুটোই সত্যি হতে হবে)
    bool r2 = a || b;    // OR → true (একটি সত্যি হলেই)
    bool r3 = !a;        // NOT → false (উল্টো)

    চিহ্ন:
    চিহ্ন	নাম	অর্থ
    &&	AND	এবং
    ||	OR	অথবা
    !	NOT	নয়

    স্তর ২: ধারণা
    Truth Table:

    AND (&&):
    A	    B	    A && B
    true	true	true
    true	false	false
    false	true	false
    false	false	false

    OR (||):
    A	    B	    A || B
    true	true	true
    true	false	true
    false	true	true
    false	false	false

    NOT (!):
    A	    !A
    true	false
    false	true
    Short-circuit:
    cpp
    if (a != 0 && 10/a > 2) { }
    a == 0 হলে ডান দিক চেকই করে না—এরর এড়ায়।

## Assignment Operators (অ্যাসাইনমেন্ট অপারেটর)
    স্তর ১: সিনট্যাক্স
    cpp
    int a = 10;      // সাধারণ assignment

    a += 5;          // a = a + 5 → 15
    a -= 3;          // a = a - 3 → 12
    a *= 2;          // a = a * 2 → 24
    a /= 4;          // a = a / 4 → 6
    a %= 4;          // a = a % 4 → 2

    Bitwise assignment (পরে):
    cpp
    a &= b;    // a = a & b
    a |= b;    // a = a | b
    a ^= b;    // a = a ^ b
    a <<= 2;   // a = a << 2
    a >>= 2;   // a = a >> 2

    স্তর ২: ধারণা
    কেন a += 5, a = a + 5 এর চেয়ে ভালো?
    1.	কম টাইপ
    2.	দ্রুত (একবার a অ্যাক্সেস)
    3.	পরিষ্কার

    উদাহরণ:
    cpp
    // খারাপ
    total = total + count + 100;

    // ভালো
    total += count + 100;

## Operator Details 
    File Name: ৮-২ C++ Operators ৪ স্তরে সম্পূর্ণ বিশ্লেষণ + আপনার জন্য অগ্রাধিকার

    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing