class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int duplicates = 0;
        int t=1;
        for(int i=0; i<nums.size()-1; i++){
            while( (i+1)+duplicates<nums.size() && nums[i] == nums[(i+1)+duplicates])
                duplicates++;                    //  ptr 2: nums[t] look for uniqueness
            t= (i+1)+duplicates;
            if(t <nums.size())
            nums[i+1] = nums[t];
        }
        return nums.size()-duplicates ;
    }

};