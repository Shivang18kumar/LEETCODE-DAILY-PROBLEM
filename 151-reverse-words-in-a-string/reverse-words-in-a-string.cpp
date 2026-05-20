class Solution {
public:

     void reversepart(string &s,int l,int r){
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        } 
     }

    string reverseWords(string s) {
        int n = s.size();
        reversepart(s,0,n-1);

        int start=0;
        int end=0;
        while(start<n){
            while(start<n && s[start]==' '){
                start++;
            }
            if(start>=n) break;

            end=start;
            while(end<n && s[end]!=' ') end++;

            reversepart(s,start,end-1);

            start=end;
        }

        string ans="";
        int i =0;
        while(i<n){
            while(i<n && s[i]==' ') i++;

            while(i<n && s[i]!=' '){
                ans+=s[i];
                i++;
            }
            while(i<n && s[i]==' ') i++;

            if(i<n){
                ans+=' ';
            }
        }
        return ans;
    }
};