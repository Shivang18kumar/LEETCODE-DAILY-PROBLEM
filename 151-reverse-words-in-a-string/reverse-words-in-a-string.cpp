class Solution {
public:
    string reverseWords(string s) {
        vector<string> store;
        string temp="";
        for(char ch:s){
            if(ch!=' '){
                temp+=ch;
            }
            else{
                if(temp!=""){
                    store.push_back(temp);
                    temp="";
                }
            }
        }
        if(temp!="") store.push_back(temp);

        reverse(store.begin(),store.end());
        string ans="";
        for(int i=0;i<store.size();i++){
            ans+=store[i];
            if(i!=store.size()-1) ans+=" ";
        }
        return ans;
    }
};