class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1;    // We add binary digits from last, So we take pointers to last index.
        int sum;
        int carry=0;  // Initially carry is zero.
        string result;
        while(i>=0 || j>=0)   // while any indexe of a and b is greater than zero, repeat the loop.
        {
            sum=carry;    // First we set carry value to sum, So we can add this value with all other values of 'a' and 'b' string of particular index.
            if(i>=0){
                sum+=a[i--]-'0';    // It substracts ascii value from ascii character at 'a', from this we get decimal value. We substract '0' from character at index 'a'. If it is zero then we get 0 or If it is one then we get 1. 
            }   
            if(j>=0)
            {
                sum+=b[j--]-'0';    
            } // We add all three, i.e, carry+character at 'a'+character at 'b' and store its values in sum varible. The sum is maximum upto 3. It can be 0,1,2,3.
            carry=(sum>1)?1:0;  // If sum is greater than 1 i.e, for 2 and 3, then there is carry (because, summing characters contains more than one '1's) , else it doesnt contain carry.
            result+=to_string(sum%2);   // Initially sum value is in decimal, then we convert it into binary and convert that into string to store in a string variable.  We store result of sum in 'result' variable. We always get decimal to binary values by diving by 2 and storing its carry.
        }
        if(carry)   // Finally if there is carry remains, then we store it it in result variable.
        {
            result+=to_string(carry);
        }
        reverse(result.begin(),result.end());   // We store results in a appending manner, to get summed values in correct order then we should reverse it.
        return result;
    }
};
