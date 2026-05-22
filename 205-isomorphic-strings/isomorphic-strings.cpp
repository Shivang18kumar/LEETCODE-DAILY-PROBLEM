class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpp1;
        unordered_map<char,char> mpp2;
        int n = s.size();
        for(int i=0;i<n;i++){
            char a = s[i];
            char b = t[i];
            if(mpp1.find(a)!=mpp1.end() && mpp1[a]!=b
            || mpp2.find(b)!=mpp2.end() && mpp2[b]!=a ) return false;

             mpp1[a]=b;
             mpp2[b]=a;
        }
        return true;
    }
};