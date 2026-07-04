class Solution {
    typedef pair<char,int> P;
public:
    string frequencySort(string s) {
        int freq[128] = {0};
        for(char ch:s) freq[ch]++;

        vector<P> vec;
        for(int i=0;i<128;i++){
            if(freq[i]>0) vec.push_back({(char)i,freq[i]});
        }

        sort(vec.begin(),vec.end(),[](P &a, P &b){
            return a.second>b.second;
        });
        string ans="";
        for(auto it:vec){
            ans+=string(it.second,it.first);
        }
        return ans;
        
    }
};