class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
           
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            pq.push({it->second,it->first});
        }
        while(k-- && !pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
