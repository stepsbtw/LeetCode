// less optimal solution.
class Solution {
public:
    int fib(int n) {
        if (n == 0){
            return 0;
            }
        if (n == 1){
            return 1;
            }
        return fib(n-1) + fib(n-2);
    }
};

// perfect.
#include <unordered_map>
std::unordered_map<int,int> fib_hash;
class Solution2 {
public:
    int fib(int n) {
        if (n == 0){
            return 0;
            }
        if (n == 1){
            return 1;
            }
        // if the fibbo is already cached, return it.
        if(fib_hash.find(n) != fib_hash.end()){
            return fib_hash[n];
        }
        // if not, save it in cache for later.
        fib_hash[n] = fib(n-1) + fib(n-2);
        return fib_hash[n];
    }
};