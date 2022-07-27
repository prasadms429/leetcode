class Solution {
public:
    int climbStairs(int n) {      // This problem is almost same as fibonacci series.
        if(n<=2){
            return n;   // if n==1 or n==2 then return result same as it.
        }
        int first=1,second=2,temp;
        for(int i=3;i<=n;i++)
        {
            int temp=second;    // store the second variable value in temporariry variable, to make it as first variable in a next iteration to add.
            second+=first;      // add consecutive first and second variable and store result in second variable, to update it with new value in second variable itself, without need to move second variable as first variable to next value.
            first=temp;         // Then second varible value is assigned to first variable, for next iteration, to add.
        }
        return second;    // After loop iteration, then result value for particular given 'n' is stored in second variable, so we print it.
    }
};


/* Question-
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 

Constraints:

1 <= n <= 45
*/
