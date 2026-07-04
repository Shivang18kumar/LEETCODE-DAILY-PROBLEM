class Solution {
public:
    bool check (string& s,string& goal, int shift){
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[(i+shift)%n]!=goal[i]) return false;
        }
        return true;
    }
    bool rotateString(string s, string goal) {
        int n=s.size();
        for(int shift =0;shift<n;shift++){
            if(check(s,goal,shift)) return true;
        }
        
        return false;
    }
};