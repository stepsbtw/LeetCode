class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        c = 0
        for j in jewels:
            for s in stones:
                if j == s:
                    c+=1
        return c

class Solution2: # simpler to code. using count function
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        ans = 0
        for x in jewels:
            ans += stones.count(x)
        return ans
        
            