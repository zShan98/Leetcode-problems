class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if(s.length() == 0) return true;
        int c = 0;
        for(int x=0; x<t.length(); x++){
            if(s[c] == t[x]) c++;

            if(c == s.length()) return true;
            
        }
        return false;

    }
};