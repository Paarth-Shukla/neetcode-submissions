class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";
        for(int i=0; i<strs.size(); i++){
            str += to_string(strs[i].size())+"#"+strs[i];
        }
        return str;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> res;
        //if(s.size()==0) return {""};
        while(i<s.size()){
            int j=i;
            while(j<s.size() && s[j]!='#'){
                j++;
            }
                int len = stoi(s.substr(i,j-i));
                res.push_back(s.substr(j+1,len));
                i = j+len+1;
            
        }
        return res;
    }
};
