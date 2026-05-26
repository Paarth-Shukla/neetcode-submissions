class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l = i+1;
            int r = n-1;

            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum>0) r--;
                else if(sum<0) l++;
                else{
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;

                    while(l<n && nums[l-1]==nums[l]) l++;
                    while(r>i && nums[r]==nums[r+1]) r--;
                }
            }
        }
        return res;
    }
};
