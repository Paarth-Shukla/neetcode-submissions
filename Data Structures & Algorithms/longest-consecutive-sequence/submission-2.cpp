class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxi = 0;
        for(int el:st){
            if(st.find(el-1) == st.end()){
                int l = 1;
                int curr = el;

                while(st.find(curr+1) != st.end()){
                    l++;
                    curr++;
                }
                maxi = max(maxi, l);
            }
        }
        return maxi;
    }
};
