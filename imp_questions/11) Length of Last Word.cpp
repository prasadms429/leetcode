class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx=s.size()-1;   // To find length of last word in a string, we count from end of the string.
        int count=0;
        while(s[idx]==' ')    // If last character is null then we reduce index number, until we find non-null character at the end.    
        {
            idx--;
        }
        while(idx>=0)   // If we found non-null character at the end, then we count the characters till we find null character, to find length of the last word in a string.
        {
            if(s[idx]!=' ')
            {
                count++;
                idx--;
            }
            else
            {
                break;  // If we null in between counting characters then we simply break out of the loop.
            }
        }
        return count;
    }
};

/* Question-
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 

Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.
*/
