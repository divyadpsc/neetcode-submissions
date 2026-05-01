class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>ana(256,0);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            ana[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            ana[t[j]]--;
        }
        int flag=0;
     for(int i=0;i<ana.size();i++){
        if(ana[i]!=0){
            return false;
        }
     }
    
        return true;
     
    }
};
