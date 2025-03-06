class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> temp(nums1.begin(), nums1.begin()+m);
        int cnt =0, cnt1 = 0, x=0;
        
        while(cnt< m && cnt1 < n){
            if(temp[cnt] < nums2[cnt1]){
                nums1[x++] = temp[cnt++];
            }
            else{
                nums1[x++] = nums2[cnt1++];
            }
        }

        while(cnt < m)
            nums1[x++] = temp[cnt++];

        while(cnt1 < n)
            nums1[x++] = nums2[cnt1++];

    }
};