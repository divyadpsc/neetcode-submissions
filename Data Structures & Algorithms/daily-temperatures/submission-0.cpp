class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperature) {
    int n = temperature.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int j=temperature.size()-1;j>=0;j--){
          
            while(!st.empty() && temperature[st.top()]<=temperature[j]){
                st.pop();
            }
            if(!st.empty()){
                ans[j]=st.top()-j;
            }
            st.push(j);

        }
        return ans;
    }
};
