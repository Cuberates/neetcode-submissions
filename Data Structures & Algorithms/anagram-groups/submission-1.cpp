class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<string>> groups;
        for (size_t idx {0}; idx < strs.size(); idx++) { 
            string temp = strs[idx];
            sort(temp.begin(), temp.end());
            groups[temp].push_back(std::move(strs[idx])); 
        }
        vector<vector<string>> ans; 
        for (auto &key : groups) { 
            std::vector<std::string> group; 
            for (auto &s : key.second) { 
                group.push_back(std::move(s));
            }
            ans.push_back(std::move(group));
        }
        return ans; 
    } 
};