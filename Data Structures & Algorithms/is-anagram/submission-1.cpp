class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> freq(26,0);
        for(char chr:s){
            freq[chr-'a']++;
        }
        for(char chr:t){
            freq[chr-'a']--;
        }
        for(int i:freq){
            if(i!=0) return false;
        }
        return true;
    }
};
