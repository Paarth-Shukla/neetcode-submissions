class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> res(2);
        for(int i=0; i<nums.size(); i++){
            int req = target-nums[i];
            if(mp.count(req)) res = {mp[req], i};
            mp[nums[i]] = i;
        }
        sort(res.begin(), res.end());
        return res;
    }
};
