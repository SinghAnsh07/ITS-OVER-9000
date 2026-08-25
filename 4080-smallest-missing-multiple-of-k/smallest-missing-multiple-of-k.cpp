class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int ans = k;
        for(int i=0;i<n;i++){
            if(nums[i] == ans){
                ans += k;
            }
        }
        return ans;
    }
};