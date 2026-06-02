class Solution {
public:
    void f(vector<int>& nums, int target, set<vector<int>>& res, int& sum, vector<int>& tmp, int ind){
        if(ind < 0) return;
        if(sum>target) return;
        if(sum == target){
            res.insert(tmp);
            //tmp = {};
            return;
        }
        //not-take
        f(nums, target, res, sum, tmp, ind-1);
        //take
        sum += nums[ind];
        tmp.push_back(nums[ind]);
        f(nums, target, res, sum, tmp, ind);
        tmp.pop_back();
        sum -= nums[ind];
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        set<vector<int>> res;
        int sum;
        vector<int> tmp;
        f(nums, target, res, sum, tmp, nums.size()-1);
        vector<vector<int>> ans(res.begin(), res.end());
        return ans;
    }
};
