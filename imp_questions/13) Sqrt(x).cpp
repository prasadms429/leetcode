class Solution {
public:
    int mySqrt(int x) { // To find square root without using any functions, and write squre root value by truncating decimal point after integer.
        for(long i=0;i<=x;i++)    // we should use long datatype, because if use integer then it may overflow, till it goes to x.
        {
            if(i*i==x){   // we first find any two times multiple of number is equal to given 'x' then it is the answer. ( Usually square root reduces two times multiplication into one time )
                return i;
            }
            if(i*i>x)   // If two times of any number is not equal, then it must be between any square root numbers. If multiple of two number exceeds 'x' then it must be one less than that current multiple. 
            {
                return --i;   // 'i' must be pre-decremented, if it is post-decrement then it first returns 'i' value after that it decrements 'i' value.
            }
        }
        return 0;
    }
};


/* Question-
Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

 

Example 1:

Input: x = 4
Output: 2
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
 

Constraints:

0 <= x <= 231 - 1
*/
