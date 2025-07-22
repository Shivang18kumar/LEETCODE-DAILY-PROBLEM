class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> mpp;
        unordered_map <char,int> cpp;
        for(auto ch:s){
            mpp[ch]++;
        }
        for (auto ph:t){
            cpp[ph]++;
        }
        if(mpp==cpp){
            return true;
        }
        return false;
    }
};