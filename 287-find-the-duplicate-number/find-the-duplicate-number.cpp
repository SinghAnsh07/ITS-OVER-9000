class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //this solution will give time limit exceeded
        // int n= nums.size();
        // for(int i=0; i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             return nums[i];
        //         }
        //     }
        // }
        //floyd cycle detection
        int slow = nums[0];
        int fast = nums[0];
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast)
                break;
        }
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};