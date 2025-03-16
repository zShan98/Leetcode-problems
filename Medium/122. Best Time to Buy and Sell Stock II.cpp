class Solution {
public:
    int maxProfit(vector<int>& p) {
       int m = 0;

       for(int x=1; x<p.size(); x++){
        if(p[x] - p[x-1] > 0)
            m += p[x] - p[x-1];
       } 
       return m;
    }
};
