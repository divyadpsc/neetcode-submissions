class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
           if(mp.find(target-nums[i])!=mp.end() && i!=mp[target-nums[i]]){
            v.push_back(i);
            v.push_back(mp[target-nums[i]]);
            break;
           }
        }
        sort(v.begin(),v.end());
        return v;
            
    }
};

