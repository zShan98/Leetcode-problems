class Solution {
public:
    int maxArea(vector<int>& h) {
         // two pointer approch
        int temp = INT_MIN;
        int maxi = 0;
        int maxj = h.size()-1;
        int ans = 0;
        for(int i=0;  i<h.size()-1; i++){
            temp = h[maxi]<h[maxj] ? h[maxi]:h[maxj];
            ans = ans<temp*(maxj-maxi) ? temp*(maxj-maxi):ans;
            
            if (h[maxi]<=h[maxj]) maxi++;
            else if (h[maxi]>h[maxj]) maxj--;

        }

        return ans;
    }
};