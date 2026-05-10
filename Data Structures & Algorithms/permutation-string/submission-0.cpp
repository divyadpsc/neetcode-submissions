class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      vector<int>freq(26,0);
         int n = s1.size(), m = s2.size();

        if (m < n) return false;
      for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
      }  
      int left=0;
      for(int i=0;i<s2.length();i++){
           freq[s2[i]-'a']--;
           if(i-left+1>s1.length()){
            freq[s2[left]-'a']++;
            left++;

           }
           
      
        bool ok = true;
            for (int k = 0; k < 26; k++) {
                if (freq[k] != 0) {
                    ok = false;
                    break;
                }
            }
            
               if (ok) return true;
      }

        return false;
    }
};
