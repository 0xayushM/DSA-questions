
# Keypoints

## 1. While calculating even or odd n & 1 Is Faster than n % 2 - 

don't use this - 
```
if(n%2 == 0)
    cout << "Even";
else cout << "Odd";

```
use this - 
```
if(n&2) {
    cout << "Odd";
} else cout << "Even";
```

**Bitwise Operations:** n & 1 performs a single bitwise operation, which is faster than division and modulus operations.

**Fewer CPU Cycles:** Bitwise operations generally require fewer CPU cycles, meaning they are faster, especially when performed repeatedly.

So, using n & 1 is a preferred, optimized method to check if a number is even or odd, especially in cases where performance is important.