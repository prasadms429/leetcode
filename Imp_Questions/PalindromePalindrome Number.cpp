class Solution {
public:
    bool isPalindrome(int x) {
        int num1=x;
        double sum=0;
        int rem,div;
        
        while(x>0)
        {
            rem=x%10;
            sum=(sum*10)+rem; // This  adds remainder to every 10th place
            x/=10;
        }
        if(sum==num1){
            return true;    // It is palindrome
        }
        return false;   // It is not palindrome
    }
};
