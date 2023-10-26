/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
*/

// another hashmap problem

#include <string>
#include <unordered_map>
class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char,int> hashmap;
        hashmap = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n = s.size();
        int output = 0;
        for(int i = 0; i < n; i++){
            if(hashmap[s[i]] < hashmap[s[i+1]]){
                output -= hashmap[s[i]];
            }else{
                output += hashmap[s[i]];
            }
        }
        return output;
    }
};