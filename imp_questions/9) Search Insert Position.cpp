class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {   // I implemented this solution using binary search approach.
        int l=0;
        int h=nums.size()-1;    // To get highest index of nums, we use this line of code.
        int mid;
        while(l<=h)   // when low become greater than high, then we break the loop
        {
            mid=(l+h)/2;
            if(nums[mid]==target)   // if mid value is equal to target then we print its index.
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;    // If mid value of nums is less than target number, then we move lower variable 'l' to one index further of mid.
            }
            else if(nums[mid]>target)
            {
                h=mid-1;  // If mid value of nums is greater than target number, then we move high variable 'h' to one index less of mid.
            }
        }
        return l;   // If we dont find the matching number in the vector, then we print lower index, where the given element should be, if we insert that to vector.
    }
};


/* Question
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
*/
