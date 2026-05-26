class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int maxi = 0;
        int maxfq = 0;
        int i=0;

        for(int j=0; j<s.size(); j++){
            freq[s[j]-'A']++;
            maxfq = max(maxfq, freq[s[j]-'A']);

            while((j-i+1)-maxfq > k){
                freq[s[i]-'A']--;
                i++;
            }

            maxi = max(maxi, j-i+1);
        }
        return maxi;
    }
};
