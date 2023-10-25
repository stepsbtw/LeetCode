/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
the obvious solution would be brute forcing it with for loops
*/

class old_Solution{
    std::vector<int> twoSum(std::vector<int>& nums, int target){
        int n = nums.size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(target - nums[i] == nums[j]){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

// analizying it further, its evident the need of a data structure to save the sum. Using hashmap is the way

#include <unordered_map>
class Solution{
    std::vector<int> twoSum(std::vector<int>& nums, int target){
        std::unordered_map<int,int> hashmap; // a hashmap that saves element and index
        int n = nums.size();
        int expected;
        int complement;
        for(int i = 0; i < n ; i++){
            complement = target - nums[i];
            if(hashmap.count(complement)){ // function that counts how many elements in hash
                return {hashmap[complement], i};
            }
            hashmap[nums[i]] = i;
        }
        return {}; // no solution
    }
};
