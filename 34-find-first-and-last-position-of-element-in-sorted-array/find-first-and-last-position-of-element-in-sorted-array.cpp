class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startingPosition = -1, endingPosition = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                if(startingPosition == -1){
                    startingPosition = i;
                    endingPosition = i;
                }
                else{
                    endingPosition = i;
                }
            }
        }
        return {startingPosition,endingPosition};
    }
};