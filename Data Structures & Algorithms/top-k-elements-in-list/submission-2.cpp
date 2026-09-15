class Solution {
public:
    void out(std::vector<pair<int,int>> &countRanks) { 
        for (auto &rank : countRanks) { 
            std::cout << rank.first << ' ' << rank.second << '\n';
        }
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> counts; 
        for (auto &num : nums) { counts[num]++; }

        std::vector<pair<int,int>> countRanks;  
        countRanks.reserve(2001u); // At most 2001 pairs
        for (auto &frequencyCount : counts) { 
            countRanks.push_back(std::move(frequencyCount));
        }

        auto fewerCount = [&](std::pair<int,int> &a, std::pair<int,int> &b) -> bool { 
            return a.second < b.second; 
        };

        std::sort(countRanks.begin(), countRanks.end(), fewerCount);
        std::reverse(countRanks.begin(), countRanks.end());

        std::vector<int> mostFreq;
        for (size_t idx {0}; idx < k; idx++) { 
            mostFreq.push_back(std::move(countRanks[idx].first));
        } 
        return mostFreq;
    }  
};
