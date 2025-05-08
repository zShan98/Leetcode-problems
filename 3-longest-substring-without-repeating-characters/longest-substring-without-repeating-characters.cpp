class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l = 0;
        int r= 0;
        int best = 0;
        unordered_map<char, int> maps;

        while(r < s.size()){

            while(r < s.size()){
                if(maps.find(s[r]) == maps.end() || maps[s[r]] == 0){
                    maps[s[r]] = 1;
                }else if(maps[s[r]] == 1){
                    break;
                }
                r++;
            }

            best = best > r-l ? best: r-l;
            if(r < s.size()){
                maps[s[l]] = 0;
                l++;

            }

        }

        return best;
    }
};