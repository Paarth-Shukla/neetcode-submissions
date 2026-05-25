class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i : nums) mp[i]++;
        vector<vector<int>> freq(nums.size()+1);
        for(auto it : mp){
            freq[it.second].push_back(it.first);
        }

        vector<int> res;
        for(int i=freq.size()-1; i>=0 && res.size()<k; i--){
            
            for(int num : freq[i]){
                res.push_back(num);
                if(res.size()==k) break;
            }
        }
        return res;
    }
};
