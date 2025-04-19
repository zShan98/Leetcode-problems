class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int l = 0;
        int r = 0;
        int best = nums.size()+1;
        int sum = 0;
        while(r < nums.size()){
            
            while(r < nums.size() && sum < target){
               sum += nums[r];
               r++;
            }

            while(l < r && sum >= target){
                best = best < r-l ? best:r-l;
                sum = sum-nums[l];
                l++;
            }
        }

        return best == nums.size()+1 ? 0:best;
    }
};