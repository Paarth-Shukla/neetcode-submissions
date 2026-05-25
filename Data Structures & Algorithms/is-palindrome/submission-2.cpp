class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string tmp = "";
        for(char c : s){
            if(isalnum(c)){
                tmp+=tolower(c);
            }
        }

        int l = tmp.size();
        int i=0, j=l-1;
        while(i<j){
            if(tmp[i]!=tmp[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
