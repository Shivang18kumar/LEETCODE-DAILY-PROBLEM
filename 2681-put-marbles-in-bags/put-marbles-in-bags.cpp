class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int m = weights.size()-1;
        vector<int> pairsum(m,0);
        for(int i=0;i<m;i++){
            pairsum[i]=weights[i]+weights[i+1];
        }
        sort(begin(pairsum),end(pairsum));
        long maxsum=0;
        long minsum=0;
        for(int i=0;i<k-1;i++){
            maxsum=maxsum+pairsum[m-1-i];
            minsum=minsum+pairsum[i];
        }
        return maxsum-minsum;
    }
};