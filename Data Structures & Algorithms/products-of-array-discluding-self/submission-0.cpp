class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> op(n,1);
        int l = 1;
        int r = 1;
        

        for(int i=0; i<n; i++){
            op[i] = l;
            l *= nums[i];
        }
        for(int i=n-1; i>=0; i--){
            op[i] *= r;
            r *= nums[i];
        }
        return op;
    }
};
