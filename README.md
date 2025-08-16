
# DSA Solutions Repository

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