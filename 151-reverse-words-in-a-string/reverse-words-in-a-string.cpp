class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int l=0,r=0;
        int n=s.size();
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                s[r]=s[i];
                r++;
            }
            else if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                s[r]=' ';
                r++;
                l=r;
            }
           
        }
         if (l < r)
            reverse(s.begin() + l, s.begin() + r);
       if (r > 0 && s[r - 1] == ' ')
            r--;

        s.resize(r);
        return s;
    }
};