class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs.front();
        string second = strs.back();
        string result;

        for(int i=0;i<first.length();i++){
            if(first[i]!=second[i]) break;
            result+=first[i];
        }
        return result;
    }
};