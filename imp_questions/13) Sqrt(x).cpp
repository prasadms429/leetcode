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
