class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1) return s.size();
        int i=0;
        unordered_set<char> st;
        //st.insert(s[i]);
        int maxi = 0;
        
        for(int j=0; j<s.size(); j++){
            while(st.find(s[j])!=st.end()){
                st.erase(s[i++]);
            }
            st.insert(s[j]);
            maxi = max(maxi, j-i+1);
        }

        return maxi;
    }
};
