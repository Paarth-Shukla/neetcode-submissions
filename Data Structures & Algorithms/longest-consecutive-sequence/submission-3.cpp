class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i:nums) st.insert(i);
        int maxi = 0;
        //int curr;
        //int len=0;
        for(int num:st){
            if(st.find(num-1)==st.end()){
                int curr = num;
                int len=1;
                while(st.find(curr+1)!=st.end()){
                    curr +=1;
                    len++;
                }
                maxi = max(maxi, len);
            }
        }
        return maxi;
    }
};
