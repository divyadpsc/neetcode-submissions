class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)!=s.end());
            {
               int  curNum=nums[i];
                int curStreak=1;
                while(s.find(curNum+1)!=s.end()){
                    curNum++;
                    curStreak++;
            }
            ans=max(ans,curStreak);

            }
        }
        return ans;
    }
};
