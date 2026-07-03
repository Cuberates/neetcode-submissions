class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(size_t i = 0; i < nums.size(); i++) { 
            for(size_t j = 0; j < nums.size(); j++) { 
                if (i != j && nums[i] + nums[j] == target) { 
                    std::vector<int> ans = {static_cast<int>(i), static_cast<int>(j)};
                    return ans;
                }
            }
        }
        std::vector<int> err = {-1, -1};
        return err; 
    }
};
