# simplest way to think is to use strings, convert and reverse.

class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        x = str(x)
        reverse = x[::-1]
        if x == reverse:
            return True
        return False