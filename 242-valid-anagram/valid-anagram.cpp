class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        unordered_map<char,int> cpp;
        for(auto ch:s){
            mpp[ch]++;
        }
        for(auto ch:t){
            cpp[ch]++;
        }
        if(mpp==cpp) return true;

        return false;
    }
};