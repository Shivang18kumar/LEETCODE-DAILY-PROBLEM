class Solution {
public:
    string removeOuterParentheses(string s) {
        int n= s.size();
        int cnt=0;
        string res;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(cnt>0) res+=s[i];
                  cnt++;
            }
          
            if(s[i]==')'){
                cnt--;
                if(cnt>0) res+=s[i];
            }
        }
         return res;
    }
   
};