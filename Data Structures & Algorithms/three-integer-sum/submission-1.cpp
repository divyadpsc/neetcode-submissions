class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target=0;
        vector<vector<int>>v;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k = nums.size()-1;
            
            while(j<k)
                {
                    int sum =nums[i]+nums[j]+nums[k];
                    if(sum==target){
                        v.push_back({nums[i],nums[j],nums[k]});
                        j++;
                        k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                    }
                    else if(sum>target){
                        k--;
                    }
                    else
                    {
                        j++;
                    }
                }
        }
        return v;
    }
};
