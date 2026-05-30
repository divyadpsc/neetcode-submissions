class Solution {
public:
    int findMin(vector<int> &arr) {
        int i=0;
        int j = arr.size()-1;
        int mid = 0;
        int ans =INT_MAX;
        while(i<=j){
            mid = (i+j)/2;
            
            if(arr[mid]>=arr[j]){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
            ans = min(ans,arr[mid]);
        }
        return ans;
    }
};
