class Solution {
public:
    string largestOddNumber(string num) {
        int lastoddidx=-1;
        for(int i=0;i<num.size();i++){
            if(num[i]%2!=0){
                lastoddidx=i;
            }
        }
        if(lastoddidx==-1) return "";

        else {
            return num.substr(0,lastoddidx+1);
        }
        
    }
};