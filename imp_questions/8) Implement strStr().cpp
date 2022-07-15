class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){   // If there is no string in needle to compare with haystack, then return 0
          return 0;
        }
        int m=haystack.length();
        int n=needle.length();
        for(int i=0;i<=m-n;i++)     // If we compare till end of the length of 'haystack' string then our 'j' loop may compare its value of needle with out of present value in haystack string. So, we use m-n size to 
        {
            bool res=true;
            for(int j=0;j<n;j++)
            {
                if(haystack[i+j]!=needle[j])    // 'haystack[i+j]' is for comparing all characters of haystack with all characters of 'needle', by moving 'i' index one by one, to find matching substring in between the main string,'haystack'.
                {
                    res=false;    // if any charcter while comparing dont match, then we simply break out of loop and move to other index for comparing. And also make res variable as false.
                    break;
                }
            }
            if(res) // By comparing one set of values of 'haystack' with 'needle' characters, and if all values were matched, then it wont execute above 'if' block code 
            {       // and 'res' remained as true, so we can print the position matching string that is in 'haystack', by using index 'i'. 
                return i;
            }
        }
        return -1;    // If dont get matching string then return -1;
    }
};


/* Question
Implement strStr().

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

 

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.
*/
