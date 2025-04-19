class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> sol;
        int y,z;
        sort(nums.begin(), nums.end());

        for(int x=0; x<nums.size()-2; x++){
            z = nums.size()-1;
            y = x+1;
            while(y<z){
                if(nums[y]+nums[z] == -nums[x]){
                    sol.insert({nums[x],nums[y],nums[z]});
                }

                if(nums[y+1]+nums[z] <= -nums[x]) y++;
                else if(nums[y]+nums[z-1] >= -nums[x]) z--;
                else y++;

            }
            
        }

        return vector<vector<int>> (sol.begin(), sol.end());
    }
};