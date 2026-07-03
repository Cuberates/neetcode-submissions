class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for(size_t idx {0}; idx < nums.size(); idx++) { 
            if (idx > 0 && nums[idx] == nums[idx-1]) return true; 
        }
        return false; 
    }
};