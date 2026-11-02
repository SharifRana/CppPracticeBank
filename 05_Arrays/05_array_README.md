# Array

## Definition
    An array contains multiple objects of identical types stored sequentially in memory. The individual objects in an array, referred to as array elements, can be addressed using a number, the so-called index or subscript. An array is referred to as a vector.

## Key Features 
    Of the same type (homogeneous)
    Specific size (fixed)
    Sequential memory (contiguous)
    O(1) access

## Pattern
    `type arr[size];`

    Array Pattern:
    |___ Declaration: int arr[5];
    |___ Initialization: int arr[5] = {10, 20, 30, 40, 50};
    |___ Access: arr[i] (0 <= i < n)
    |___ Update: arr[i] = x; 
    |___ Traversal: for (i=0; i<n; i++)

    Memory: base + i * sizeof(type)
    Index:   0    1    2    3    4
    Value: [10] [20] [30] [40] [50]

## Algorithm (Basic Operation)
1. Declare: int arr[100];
2. Input: for(i=0; i<n; i++) cin >> arr[i];
3. Sum: for (i=0; i<n; i++) sum += arr[i];
4. Max: max = arr[0]; if( arr[i]>max ) max = arr[i];
5. Search: if( arr[i] == key) break;
6. Reverse: swap( arr[1], arr[r] ) with two pointer
7. Sort: Bubble/Selection/Insertion

## Template
    #include <iostream>
    using namespace std;

    int main(){
        // 1.
        int n;
        cin >> n;

        // 2. Declaration
        int arr[100];

        // 3. Input 
        for (int = 0; i < n; i++){
            cin >> arr[i]       // arr[i] or arr[n]??
        }
        
        // or 4. Initialization (loop)
        for (int = 0; i < 5; i++){
            arr[i] = i * 10;
        }
        // {0, 10, 20, 30, 40}

        // 5. Direct init
        int marks[5] = {85, 90, 78, 92, 88}

        // 6. Size (auto)
        int a[] = {1, 2, 3, 4, 5}; // size = 5

        // 7. Output or Traverse
        for (int i = 0; i < n; i++){
            cout arr[i] << " ";
        }
        //or
        for (int i = 0; i < 5; i++){
            cout << marks[i] << " ";
        }

        // 8. Sum
        int sum = 0;
        for (int = 0; i < n; i++){
            sum += arr[i];
        }

        // 9. Max
        int maxVal = arr[0];
        for (int i = 0; i < n; i++){
            if (arr[i] > maxVal){
                maxVal = arr[i];
            }
        }

        // 10. Linear Search
        int key = 30, pos = -1;
        for (int i = 0; i < n; i++){
            if (arr[i] == key){
                pos = i; break;
            }
        }

        // 11. Reverse (in-place)
        int l = 0, r = n - 1;
        while (l < r){
            swap (arr[l], arr[r]);
            l++; r--;
        }

        return 0;
    }

## 12. 2D array:
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matrix[i] [j] << " ";
        }
        cout << endl; 
    }

## 13. Bubble Sort: 
    for (int i = 0; i < n-1 ; i++){
        for (int j = 0; j < n -1; j++){
            if (arr[j] > arr[j + 1]){
                swap( arr[j], arr[j + 1]);
            }
        }
    }

## 14. Binary Search:

    int binarySearch (int arr[], int n, int key){
        int l = 0, r = n - 1;
        while (l <= r){
            int mid = l + (r - 1) / 2;
            if (arr[mid] == key){
                return mid;
                }else if (arr[mid] < key){
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
        }
        return -1;
    }

## Checklist 
    Index start from 0?
    Out of bounds avoid?
    Size is right?
    Size pass to Function?
    

## Array Details 
    File Name: 
    ১৫-১ Array সম্পূর্ণ লেভেল-ভিত্তিক বিশ্লেষণ 
    ১৫-২ Array শেখার ৪ স্তর বিস্তারিত ধাপে ধাপে ব্যাখ্যা
    ১৫-৩ Array ও Table সম্পর্ক, প্রয়োগ, সুবিধা-অসুবিধা — সম্পূর্ণ বিশ্লেষণ
    ১৫-৪ Array ও Table-এর সম্পর্ক বিস্তারিত ব্যাখ্যা

    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing

    File Name: ৩-২ ৮টি README ফাইল সম্পূর্ণ নোট (Definition, Pattern, Algorithm, Template).docx
    Folder Location: ...\Learning Plan Details\DSA & C++\Basic Learing\প্যাটার্ন শিখুন