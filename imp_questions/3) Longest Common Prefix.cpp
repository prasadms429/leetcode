class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        char current;
        int size=strs.size();
        int minimum=min_length(strs,size);
        
        for(int i=0;i<minimum;i++)  // It travers through characters of first string element, till minimum string size.
        {
            current=strs[0][i]; // First string element in vector.
            for(int j=1;j<strs.size();j++)  // It travers through second string element to last string element in the vector.
            {
               if(strs[j][i]!=current){     // It compares charcters in the string of first element with all other characters of string elements in the vector.
                   return res;
               }
            }
            res.push_back(current);
        }
        
        return res;
    }
    int min_length(vector<string> & vec,int n)  // To find minimum lenth string we use it. If we dont find minimum length string, then code may compare first string char values with empty string value, of other string elements.
    {
        int min=vec[0].size();
        for(int i=1;i<n;i++)
        {
            if(vec[i].size()<min)
            {
                min=vec[i].length();
            }
        }
        return min;
    }
};

/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.
*/
