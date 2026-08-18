class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i = 0; i <= n-k; i++) {
            unordered_set<int> s;
            for(int j = i; j < i+k; j++){
                s.insert(nums[j]);
            }
            for(int x : s){
                freq[x]++;
            }
        }
        int ans = -1;
        for(auto x : freq){
            if(x.second == 1){
                ans = max(ans, x.first);
            }
        }
        return ans;
    }
};