int cost(vector<int>& nums, vector<int>& memo,int i){
    if(i+nums[i] >= nums.size()-1) return 1;
    if(memo[i] != -1) return memo[i];

    int min = i;    // index to the min jump path
    memo[i] = INT_MAX-1;

    for(int x=i+1; x<=i+nums[i] && x<nums.size()-1; x++){
        memo[x] = cost(nums, memo,x);
        min = memo[min] > memo[x] ? x:min; // calculate minimum cost over all children
    }
    return memo[min]+1;
}


class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> tmp(nums.size());
        for(int x=0; x<nums.size(); x++) tmp[x] = -1;
        return nums.size() > 1 ? cost(nums, tmp, 0):0;
    }
};