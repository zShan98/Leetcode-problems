class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> two_nums;
        
        int greatest = nums[0]; // key to the greatest
        for(int x=0; x<nums.size(); x++){

            if(two_nums.find(nums[x]) != two_nums.end()){
                two_nums[nums[x]]++;
                if(two_nums[nums[x]] > two_nums[greatest]){
                    greatest = nums[x];
                }
                if(two_nums[greatest] > nums.size()/2){
                    return greatest;
                }

            }else{
                two_nums[nums[x]] = 1;
            }
        }
        return greatest;
    }
};