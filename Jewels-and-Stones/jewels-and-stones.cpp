#include <string>
class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        int ans = 0;
        for(char i : jewels){
            for(char j : stones){
                if(i==j){
                    ans++;
                }
            }
        }
        return ans;
    }
};

// simpler to code, using the c++ count function.
class Solution2{
    public: int numJewelsInStones(std::string jewels, std::string stones){
        int ans = 0;
        for(char i : jewels){
            ans += count(stones.begin(),stones.end(),i);
        }
        return ans;
    }
};