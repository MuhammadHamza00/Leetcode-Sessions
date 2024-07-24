class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        if (n == 1) return nums[0];
        
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n-1] != nums[n-2]) return nums[n-1];

        for(int i=1;i<n;i++){
            int current = nums[i];
            if(nums[i-1] != current && nums[i+1] != current){
                res = nums[i];
            }
        }
        return res;
    }
};