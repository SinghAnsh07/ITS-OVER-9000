class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int n=nums.size();
        for (int i = 1; i <n && nums[i] == nums[i-1] + 1; i++)
            sum += nums[i];
        while (find(nums.begin(), nums.end(), sum) != nums.end())
            sum++;
        return sum;
    }
};