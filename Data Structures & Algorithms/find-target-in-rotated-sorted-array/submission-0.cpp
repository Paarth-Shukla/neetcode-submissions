class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r = nums.size()-1;
        while(l<r){
            int m = (l+r)/2;
            if(nums[m]>nums[r]) l=m+1;
            else r=m;
        }

        int p = l;
        int ind1 = b(nums, target, 0, p-1);
        int ind2 = b(nums, target, p, nums.size()-1);

        return ind1==-1?(ind2==-1?-1:ind2):ind1;

    }
    int b(vector<int>& nums, int target, int l, int r){
        int ind= -1;
        while(l<=r){
            int m = (l+r)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]<target) l = m+1;
            else r = m-1;
        }
        return ind;
    }
};
