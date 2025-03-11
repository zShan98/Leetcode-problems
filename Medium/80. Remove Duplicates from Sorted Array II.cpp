class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        int k=2;
        int i=2;

        if(l <= 2) return nums.size();

        for(k=2; i<l; i++){
            while(i < l && nums[k-2] >= nums[i]) i++;
            if( i < l) nums[k++] = nums[i];
        }
        return k;        
        
    }
};