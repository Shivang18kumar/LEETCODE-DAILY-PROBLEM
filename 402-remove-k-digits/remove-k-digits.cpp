class Solution {
public:
    string removeKdigits(string num, int k) {
        string st;
        for(auto c:num){
            while(!st.empty() && k>0 && st.back()>c ){
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }
        while(!st.empty() && k>0){
            st.pop_back();
            k--;
        }
        int i=0;
        while(i<st.size() && st[i]=='0'){
            i++;
        }
        st=st.substr(i);
        if(st=="") st.push_back('0');
        return st;
    }
};