class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while(low <= high){
            int middle = (low+high)/2;
            if(nums[middle] == target){
                return middle;
            }
            else if(target > nums[middle]){
                
                low = middle+1;
            }
            else{
                high = middle - 1;
            }

        }
        return -1;
    }
};
