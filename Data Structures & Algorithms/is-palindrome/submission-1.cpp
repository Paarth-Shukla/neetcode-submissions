class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int l=0, r=n-1;

        while(l<r){
            while(!isalnum(s[r])) r--;
            while(!isalnum(s[l])) l++;
            if(l<r && tolower(s[r])!=tolower(s[l])) return false;
            l++;
            r--;
        }
        return true;
    }
};
