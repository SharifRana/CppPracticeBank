## আপনার জন্য অগ্রাধিকার
#	টপিক	        এখন শিখবেন?	কারণ
১	if statement	✅ এখনই	সবচেয়ে মৌলিক
২	if-else	        ✅ এখনই	দুই দিকের সিদ্ধান্ত
৩	else-if ladder	✅ এখনই	একাধিক শর্ত
৪	Nested if	    ✅ এখনই	ভিতরে শর্ত
৫	switch-case	    ✅ এখনই	নির্দিষ্ট মানের তালিকা
৬	Ternary ?:	    ✅ এখনই	ছোট if-else
৭	goto	        ❌ কখনো নয়	খারাপ অভ্যাস
৮	Complex conditions	⚠️ পরে	Advanced logic

## if Statement — একক শর্ত
    স্তর ১: সিনট্যাক্স (কীভাবে লিখতে হয়)

    cpp
    if (condition) {
        // condition সত্যি হলে এই কোড চলবে
    }

    এক লাইনে:
    cpp
    if (age >= 18) cout << "প্রাপ্তবয়স্ক";

    একাধিক লাইনে:
    cpp
    if (marks >= 80) {
        cout << "A+";
        cout << "অভিনন্দন!";
    }

    সিনট্যাক্স উপাদান:
    অংশ	        কাজ
    if	        Keyword
    ( )	        শর্তের বন্ধনী
    condition	তুলনা/লজিক
    { }	        কোড ব্লক
    ;	        স্টেটমেন্ট শেষ

    স্তর ২: ধারণা (কেন এভাবে লিখতে হয়)
    কেন if দরকার?
    cpp
    // if ছাড়া
    cout << "প্রাপ্তবয়স্ক";   // সবসময় দেখাবে

    // if সহ
    if (age >= 18) {
        cout << "প্রাপ্তবয়স্ক";   // শুধু শর্ত সত্যি হলে
    }

    কেন ( ) দরকার?
    •	শর্ত আলাদা করার জন্য
    •	C++ সিনট্যাক্স নিয়ম
    •	if age >= 18 লিখলে error

    কেন { } দরকার?
    cpp
    // এক লাইন হলে { } ছাড়া চলে
    if (x > 0) cout << "ধনাত্মক";

    // কিন্তু একাধিক লাইনে { } বাধ্যতামূলক
    if (x > 0) {
        cout << "ধনাত্মক";
        cout << "শূন্যের চেয়ে বড়";
    }

    সতর্কতা: { } না দিলে শুধু প্রথম লাইন if-এর অধীনে:
    cpp
    if (x > 0)
        cout << "ধনাত্মক";    // if-এর অধীনে
        cout << "শূন্যের চেয়ে বড়";    // সবসময় চলবে! ❌

## if-else — দুই দিকের সিদ্ধান্ত
    স্তর ১: সিনট্যাক্স
    cpp
    if (condition) {
        // condition সত্যি হলে
    } else {
        // condition মিথ্যা হলে
    }

    এক লাইনে:
    cpp
    if (n % 2 == 0) cout << "জোড়";
    else cout << "বিজোড়";

    স্তর ২: ধারণা (কেন এভাবে লিখতে হয়)

    কেন if-else দরকার?
    cpp
    // if দিয়ে দুবার চেক
    if (n % 2 == 0) cout << "জোড়";
    if (n % 2 != 0) cout << "বিজোড়";   // দুবার চেক

    // if-else দিয়ে একবার
    if (n % 2 == 0) cout << "জোড়";
    else cout << "বিজোড়";              // একবার চেক

    সুবিধা:
    •	দ্রুত (একবার শর্ত মূল্যায়ন)
    •	পরিষ্কার
    •	যেকোনো একটি অবশ্যই চলবে

    else কেন { } সহ?
    cpp
    if (x > 0)
        cout << "Positive";
    else
        cout << "Not Positive";   // else-এর অধীনে শুধু একটি লাইন

## else-if Ladder — একাধিক শর্ত
    স্তর ১: সিনট্যাক্স
    cpp
    if (condition1) {
        // কাজ ১
    } else if (condition2) {
        // কাজ ২
    } else if (condition3) {
        // কাজ ৩
    } else {
        // কোনো শর্তই সত্যি না হলে
    }

    উদাহরণ:
    cpp
    if (marks >= 80) {
        cout << "A+";
    } else if (marks >= 70) {
        cout << "A";
    } else if (marks >= 60) {
        cout << "B";
    } else if (marks >= 40) {
        cout << "C";
    } else {
        cout << "F";
    }

    স্তর ২: ধারণা (কেন এভাবে লিখতে হয়)

    কেন else-if দরকার?
    cpp
    // Nested if (কঠিন)
    if (marks >= 80) cout << "A+";
    else {
        if (marks >= 70) cout << "A";
        else {
            if (marks >= 60) cout << "B";
            else cout << "F";
        }
    }

    else-if সহজ:
    cpp
    if (marks >= 80) cout << "A+";
    else if (marks >= 70) cout << "A";
    else if (marks >= 60) cout << "B";
    else cout << "F";

    গুরুত্বপূর্ণ নিয়ম: বড় থেকে ছোট ক্রমে সাজান।
    cpp
    // ❌ ভুল ক্রম
    if (marks >= 40) cout << "C";
    else if (marks >= 80) cout << "A+";   // কখনো পৌঁছাবে না!
    কারণ: marks = 90 হলে প্রথম শর্তই সত্যি, else if চেকই হবে না।

## Nested if — শর্তের ভিতরে শর্ত
    স্তর ১: সিনট্যাক্স
    cpp
    if (condition1) {
        // কাজ ১
        if (condition2) {
            // কাজ ১.১
        } else {
            // কাজ ১.২
        }
    } else {
        // কাজ ২
    }

    উদাহরণ:
    cpp
    if (age >= 18) {
        if (hasLicense) {
            cout << "গাড়ি চালাতে পারবেন";
        } else {
            cout << "লাইসেন্স নিন";
        }
    } else {
        cout << "বয়স কম";
    }

    স্তর ২: ধারণা (কেন এভাবে লিখতে হয়)

    কেন Nested দরকার?
    কিছু সিদ্ধান্ত একাধিক স্তরে নির্ভর করে:
    •	প্রথমে চেক: বয়স ≥ ১৮?
    •	যদি হ্যাঁ: লাইসেন্স আছে?
    •	যদি হ্যাঁ: গাড়ি চালান

    Nested vs &&:
    cpp
    // Nested
    if (age >= 18) {
        if (hasLicense) {
            // ...
        }
    }

    // && দিয়ে
    if (age >= 18 && hasLicense) {
        // ...
    }

    কখন Nested:
    •	আলাদা else দরকার হলে
    •	ভিতরের শর্ত জটিল হলে
    •	Logic স্পষ্ট করতে

    কখন &&:
    •	দুইটি শর্ত একসাথে চেক
    •	সাধারণ ক্ষেত্রে

## switch-case — নির্দিষ্ট মানের তালিকা
    স্তর ১: সিনট্যাক্স
    cpp
    switch (expression) {
        case value1:
            // কাজ ১
            break;
        case value2:
            // কাজ ২
            break;
        case value3:
            // কাজ ৩
            break;
        default:
            // কোনো case না মিললে
    }

    উদাহরণ:
    cpp
    switch (day) {
        case 1:
            cout << "শনিবার";
            break;
        case 2:
            cout << "রবিবার";
            break;
        case 3:
            cout << "সোমবার";
            break;
        default:
            cout << "ভুল দিন";
    }

    স্তর ২: ধারণা (কেন এভাবে লিখতে হয়)

    কেন switch দরকার?
    cpp
    // else-if (লম্বা)
    if (choice == 1) { }
    else if (choice == 2) { }
    else if (choice == 3) { }
    else if (choice == 4) { }
    else { }

    // switch (পরিষ্কার)
    switch (choice) {
        case 1: break;
        case 2: break;
        case 3: break;
        case 4: break;
        default: ;
    }

    কখন switch ব্যবহার:
    •	একটি variable-এর নির্দিষ্ট মান চেক
    •	Menu system
    •	Day/month name
    •	Calculator

    কখন switch ব্যবহার নয়:
    •	Range condition (marks >= 80)
    •	Floating-point
    •	String (C++-এ সরাসরি নয়)

    কেন break দরকার?
    cpp
    switch (n) {
        case 1:
            cout << "One";
            // break নেই!
        case 2:
            cout << "Two";
            break;
    }

    n = 1 হলে "OneTwo" দেখাবে—এটাকে fall-through বলে।
    কেন এমন ডিজাইন? কখনো একাধিক case একসাথে চান:
    cpp
    switch (month) {
        case 1: case 3: case 5: case 7: 
        case 8: case 10: case 12:
            cout << "৩১ দিন";
            break;
        case 4: case 6: case 9: case 11:
            cout << "৩০ দিন";
            break;
        case 2:
            cout << "২৮/২৯ দিন";
            break;
    }
## Ternary Operator ?: — ছোট if-else
    স্তর ১: সিনট্যাক্স
    cpp
    condition ? value_if_true : value_if_false

    উদাহরণ:
    cpp
    int max = (a > b) ? a : b;
    string status = (marks >= 40) ? "Pass" : "Fail";

    স্তর ২: ধারণা

    কেন Ternary দরকার?
    cpp
    // if-else (৪ লাইন)
    int max;
    if (a > b) max = a;
    else max = b;

    // Ternary (১ লাইন)
    int max = (a > b) ? a : b;

    কখন ব্যবহার:
    •	ছোট সিদ্ধান্ত
    •	Value নির্ধারণ
    •	cout-এর ভিতরে

    কখন নয়:
    •	জটিল logic
    •	একাধিক স্টেটমেন্ট
    •	Readability কমে

## Conditons Details 
    File Name: ১০-১ C++ Condition (Decision Making) ৪ স্তরে সম্পূর্ণ বিশ্লেষণ + আপনার জন্য অগ্রাধিকার

    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing