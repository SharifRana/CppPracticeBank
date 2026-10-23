## সংজ্ঞা ও কেন দরকার
    ১.১ সংজ্ঞা
    Array = একই ধরনের (same type) একাধিক মান একটি নির্দিষ্ট নামে সংরক্ষণ।
    সহজ ভাষায়: একটি বাক্সে অনেকগুলো একই রকম জিনিস—প্রতিটির একটি index (নম্বর)।
    text
    int arr[5] = {10, 20, 30, 40, 50};
    text
    Index:   0    1    2    3    4
           ┌────┬────┬────┬────┬────┐
    Value: │ 10 │ 20 │ 30 │ 40 │ 50 │
           └────┴────┴────┴────┴────┘

## কেন Array দরকার?
    সমস্যা: ৫ জন ছাত্রের নম্বর সংরক্ষণ করতে হবে।
    ❌ Array ছাড়া (৫টি variable):
    cpp
    int mark1 = 85;
    int mark2 = 90;
    int mark3 = 78;
    int mark4 = 92;
    int mark5 = 88;

    // Average বের করতে:
    int sum = mark1 + mark2 + mark3 + mark4 + mark5;
    সমস্যা: ১০০০ জন ছাত্র হলে? ১০০০টি variable!
    ✅ Array দিয়ে:
    cpp
    int marks[5] = {85, 90, 78, 92, 88};

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }

## Array-র ৪টি মূল বৈশিষ্ট্য
    বৈশিষ্ট্য	        ব্যাখ্যা
    Same Type	    সব element একই ধরনের (int, double)
    Fixed Size	    সাইজ আগে থেকে নির্ধারিত
    Indexed	        0 থেকে শুরু
    Contiguous	    মেমরিতে পাশাপাশি

## স্তর ১ — সিনট্যাক্স (কীভাবে লিখতে হয়)
    ২.১ ঘোষণা (Declaration)
    সিনট্যাক্স:
    cpp
    type arrayName[size];

    উদাহরণ:
    cpp
    int arr[5];           // ৫টি integer
    double prices[10];    // ১০টি double
    char letters[26];     // ২৬টি character
    bool flags[100];      // ১০০টি boolean

    মনে রাখার নিয়ম:
    text
    int  arr  [5];
    ↓    ↓    ↓
    type name size

## সিনট্যাক্স চিটশিট
    cpp
    // ঘোষণা
    int arr[10];

    // Init
    int arr[5] = {1, 2, 3, 4, 5};
    int arr[] = {1, 2, 3};        // auto size
    int arr[5] = {0};             // সব 0

    // Access
    arr[0];        // প্রথম
    arr[4];        // পঞ্চম

    // Modify
    arr[0] = 100;

    // Loop
    for (int i = 0; i < 5; i++) {
        cout << arr[i];
    }

    // 2D
    int m[3][3];
    m[1][2] = 10;

## স্তর ২ — ধারণা (কেন এভাবে লিখতে হয়)
    ৩.১ কেন Index 0 থেকে শুরু?
    কারণ: মেমরি অ্যাড্রেস হিসাব সহজ।
    
    Array base address = 1000
    Element size = 4 (int)

    arr[0] → 1000 + 0×4 = 1000
    arr[1] → 1000 + 1×4 = 1004
    arr[2] → 1000 + 2×4 = 1008
    arr[i] → 1000 + i×4

    সূত্র: address = base + i × size
    যদি 1 থেকে শুরু হতো:
    
    arr[1] → 1000 + (1-1)×4 = 1000  ← জটিল!
    তাই: 0 থেকে শুরু—সহজ গাণিতিক সূত্র।

    ৩.২ কেন Fixed Size?
    কারণ: মেমরিতে জায়গা আগে থেকেই নির্ধারিত।
    cpp
    int arr[5];    // 5 × 4 = 20 bytes allocate
    Stack-এ মেমরি:
    text
    Stack:
    ┌──────────────┐
    │  arr[0] = ?  │  ← 4 bytes
    ├──────────────┤
    │  arr[1] = ?  │  ← 4 bytes
    ├──────────────┤
    │  arr[2] = ?  │
    ├──────────────┤
    │  arr[3] = ?  │
    ├──────────────┤
    │  arr[4] = ?  │
    └──────────────┘
        মোট 20 bytes
    সুবিধা: দ্রুত access (O(1))
    অসুবিধা: Size বদলানো যায় না।

## Operator Details 
    File Name: 
    ১৫-১ Array সম্পূর্ণ লেভেল-ভিত্তিক বিশ্লেষণ 
    ১৫-২ Array শেখার ৪ স্তর বিস্তারিত ধাপে ধাপে ব্যাখ্যা
    ১৫-৩ Array ও Table সম্পর্ক, প্রয়োগ, সুবিধা-অসুবিধা — সম্পূর্ণ বিশ্লেষণ
    ১৫-৪ Array ও Table-এর সম্পর্ক বিস্তারিত ব্যাখ্যা

    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing