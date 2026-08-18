class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int maj = n/2;
        return nums[maj];
    }
};