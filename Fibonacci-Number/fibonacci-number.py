# ok , this was the first solution. not optimal.
# ass numbers get bigger, you start repeating the recursions over and over.
class Solution:
    def fib(self, n: int) -> int:
        if n == 0:
            return 0
        if n == 1:
            return 1
        return self.fib(n-1) + self.fib(n-2)

# now, this is much better.
# saving the results of the fibs in a hashmap.
# optmized the code brilliantly, still, not as efficient as in cpp.

fib_hash = {}
class Solution2:
    def fib(self, n: int) -> int:
        if n == 0:
            return 0
        if n == 1:
            return 1
        # if the fibbo is already cached, return it.
        if n in fib_hash:
            return fib_hash[n]
        # if not, save it in cache for later.
        fib_hash[n] = self.fib(n-1) + self.fib(n-2)
        return fib_hash[n]