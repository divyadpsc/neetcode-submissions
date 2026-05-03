class Solution {
public:
    bool isPalindrome(string s) {
     
        string normalizedString="";
         transform(s.begin(), s.end(), s.begin(),
              ::tolower);
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i]))
        normalizedString+=s[i];

        }
        cout<<normalizedString<<endl;
           int i=0;
        int j= normalizedString.length()-1;
        while(i<=j){
            if(normalizedString[i]!=normalizedString[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
