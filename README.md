
# DSA Solutions Repository

Welcome to the **DSA Solutions Repository**! 🎯 

This repository contains solutions to various DSA problems from platforms like **LeetCode**, **CSES**, and more. The solutions are organized topic-wise, making it easy for you to explore and practice.

## Features
- Topic-wise organization of problems.
- Links to the original problems and their solutions.
- Clean, readable, and well-commented code.
- Continuously updated with new problems.

## Problems

### Leetcode ( [link](https://leetcode.com) )

#### 1. Top Interview 150 questions ( [link](https://leetcode.com/studyplan/top-interview-150/))

| #   | Problem Name               | Tags   | Problem Link                                   | Solution Link                            |
|-----|---------------------|------------|-----------------------------------------------|------------------------------------------|
| 1   | Merge Sorted Array              | Arrays/Strings                   | [Problem](https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150) | [Solution](./leetcode/top%20150%20interview/Array-strings/merge_sorted_array.cpp) |
| 2   | Remove Element             | Arrays/Strings   | [Problem](https://leetcode.com/problems/remove-element/?envType=study-plan-v2&envId=top-interview-150) | [Solution](./leetcode/top%20150%20interview/Array-strings/remove_element.cpp) |
| 3   | Remove Element             | Arrays/Strings   | [Problem](https://leetcode.com/problems/remove-element/?envType=study-plan-v2&envId=top-interview-150) | [Solution](./leetcode/top%20150%20interview/Array-strings/remove_element.cpp) |
| 4   | Remove Duplicates from Sorted Array             | Arrays/Strings   | [Problem](https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=study-plan-v2&envId=top-interview-150) | [Solution](./leetcode/top%20150%20interview/Array-strings/remove_duplicates_from_sorted_array.cpp) |
| 5   | Remove Duplicates from Sorted Array II             | Arrays/Strings   | [Problem](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/?envType=study-plan-v2&envId=top-interview-150) | [Solution](./leetcode/top%20150%20interview/Array-strings/remove_duplicate_from_sorted_array_II.cpp) |
| 6   | Rotate Array             | Arrays/Strings   | [Problem](https://leetcode.com/problems/rotate-array/description/?envType=study-plan-v2&envId=top-interview-150) | [Solution](./leetcode/top%20150%20interview/Array-strings/rotate_array.cpp) |
| 7   | Best time to buy and sell stock             | Arrays/Strings   | [Problem](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=study-plan-v2&envId=top-interview-150) | [Solution](./leetcode/top%20150%20interview/Array-strings/best_time_to_buy_and_sell_stock.cpp) |
| 8   | Roman to Integer            | Arrays/Strings   | [Problem](https://leetcode.com/problems/roman-to-integer/description/?envType=study-plan-v2&envId=top-interview-150) | [Solution](./leetcode/top%20150%20interview/Array-strings/roman_to_integer.cpp) |
| 9   | Integer to Roman            | Arrays/Strings   | [Problem](https://leetcode.com/problems/integer-to-roman/description/?envType=study-plan-v2&envId=top-interview-150) | [Solution](./leetcode/top%20150%20interview/Array-strings/integer_to_roman.cpp) |
| 10   | Length of Last Word            | Arrays/Strings   | [Problem](https://leetcode.com/problems/length-of-last-word/description/?envType=study-plan-v2&envId=top-interview-150) | [Solution](./leetcode/top%20150%20interview/Array-strings/length_of_last_word.cpp) |

### CSES ( [link](https://cses.fi/problemset/) )

#### 1. Introductory Problems

| #   | Problem Name               | Problem Link                                   | Solution Link                            |
|-----|----------------------|-----------------------------------------------|------------------------------------------|
| 1   | Weird Algorithm              | [Problem](https://cses.fi/problemset/task/1068) | [Solution](./CSES/Introductory%20problems/weird-algorithm.cpp) |
| 2   | Missing Number              | [Problem](https://cses.fi/problemset/task/1083) | [Solution](./CSES/Introductory%20problems/missing-number.cpp) |
| 3   | Repetitions              | [Problem](https://cses.fi/problemset/task/1069) | [Solution](./CSES/Introductory%20problems/repetitions.cpp) |
| 4   | Increasing Array              | [Problem](https://cses.fi/problemset/task/1094) | [Solution](./CSES/Introductory%20problems/increasing_array.cpp) |
| 5   | Permutations             | [Problem](https://cses.fi/problemset/task/1070) | [Solution](./CSES/Introductory%20problems/permutations.cpp) |
| 6   | Number Spiral              | [Problem](https://cses.fi/problemset/task/1071) | [Solution](./CSES/Introductory%20problems/number_spiral.cpp) |
| 7   | Two Knights              | [Problem](https://cses.fi/problemset/task/1072) | [Solution](./CSES/Introductory%20problems/two_knights.cpp) |
| 8   | Two Sets              | [Problem](https://cses.fi/problemset/task/1092) | [Solution](./CSES/Introductory%20problems/two_sets.cpp) |

#### 2. Sorting and Searching

| #   | Problem Name               | Problem Link                                   | Solution Link                            |
|-----|----------------------|-----------------------------------------------|------------------------------------------|
| 1   | Distinct Numbers              | [Problem](https://cses.fi/problemset/task/1621) | [Solution](./CSES/sorting%20and%20searching/distinct_numbers.cpp) |
| 2   | Apartments              | [Problem](https://cses.fi/problemset/task/1084) | [Solution](./CSES/sorting%20and%20searching/apartments.cpp) |
| 3   | Ferris Wheel              | [Problem](https://cses.fi/problemset/task/1090) | [Solution](./CSES/sorting%20and%20searching/ferris_wheel.cpp) |
| 4   | Concert Tickets              | [Problem](https://cses.fi/problemset/task/1091) | [Solution](./CSES/sorting%20and%20searching/concert_tickets.cpp) |
| 5   | Restaurant Customers             | [Problem](https://cses.fi/problemset/task/1619) | [Solution](./CSES/sorting%20and%20searching/restaurant_customers.cpp) |




## Keypoints

### 1. While calculating even or odd n & 1 Is Faster than n % 2 - 

don't use this - 
```cpp
if(n%2 == 0)
    cout << "Even";
else cout << "Odd";

```
use this - 
```cpp
if(n&1) 
    cout << "Odd";
else cout << "Even";
```

**Bitwise Operations:** n & 1 performs a single bitwise operation, which is faster than division and modulus operations.

**Fewer CPU Cycles:** Bitwise operations generally require fewer CPU cycles, meaning they are faster, especially when performed repeatedly.

So, using n & 1 is a preferred, optimized method to check if a number is even or odd, especially in cases where performance is important.

---

### 2. Taking Input in a Vector Without Knowing Its Length - 

The following code snippet demonstrates how to read multiple integers into a `vector<int>` without knowing the input length. The integers are entered as a single line, separated by spaces.

```cpp
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    // Initialize the vector to store integers
    vector<int> array;                         
    
    // To hold the input line
    string val;         

    // Read a whole line of input
    getline(cin, val);  
    
    // Convert the line into a stringstream for parsing
    stringstream ss(val);  

    int number;

    // Extract integers from the stringstream
    while (ss >> number) {  
        // Add each integer to the vector
        array.push_back(number);  
    }

    // Print the vector to verify
    for (int num : array) {
        cout << num << " ";
    }

    return 0;
}
```

### Explanation of the Code

1. **getline(cin, val);** - Reads the entire input line as a string, allowing multiple numbers to be input in a single line.

2. **stringstream ss(val);** - Creates a stringstream object to parse the input string.

3. **while (ss >> number)** - Iteratively extracts integers from the stringstream until there are no more numbers.

4. **array.push_back(number);** - Appends each parsed integer to the vector.