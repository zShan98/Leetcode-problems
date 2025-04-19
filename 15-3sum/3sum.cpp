class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;
        int y,z;
        sort(nums.begin(), nums.end());

        for(int x=0; x<nums.size()-2; x++){

            if(x > 0 && nums[x] == nums[x-1]) continue;
            
            z = nums.size()-1;
            y = x+1;
            
            while(y<z){
                if(nums[y]+nums[z] == -nums[x]){
                    sol.push_back({nums[x],nums[y],nums[z]});

                    while( y<z && nums[y] == nums[y+1]) y++;
                    y++;
                }
                else if(nums[y]+nums[z] < -nums[x]) y++;
                else if(nums[y]+nums[z] > -nums[x]) z--;

            }
            
        }

        return sol;
    }
};