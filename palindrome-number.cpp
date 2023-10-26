/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 && x%10 != 0){ // this is kinda hard too, there are some catches like, numbers > 0 ending with 0 will never be palindrome.
            return false;
        }
        int output = 0;
        while(x > output){ 
            output = output * 10 + (x % 10);
            x/=10;
        }
        if(x == output || x == output/10){ // for odd numbers we need to divide the answer by ten.
        //if you treat numbers ending with 0 as a possible palindrome, here it can go wrong.
            return true;
        }
        return false;
    }
};

/*
this one was a little harder for me as i was trapped into thinking that i needed to use for loops, number of digits, be wary of overflow
at the end, it was way simpler, just with some catches.
*/