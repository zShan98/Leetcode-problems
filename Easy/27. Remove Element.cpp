class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       // move all occurences of the val in the last and return length - freq
    int l = nums.size();
    int freq = 0;
    
    for(int x=0; x<l-freq; x++){
        if(nums[x] == val){
            freq++;
            for(int i = l-freq; i>x; i--){
                if(nums[i] != val){ // swap
                    nums[x] += nums[i];
                    nums[i] = nums[x]-nums[i];
                    nums[x] -= nums[i]; 
                    break;
                }else{
                    freq++;
                }
            }
        }
    }
    return l-freq;
    }
};