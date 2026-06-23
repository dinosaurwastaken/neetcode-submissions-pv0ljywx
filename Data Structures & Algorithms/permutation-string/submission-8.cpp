class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length() < s1.length()) return false;
        vector<int>S1 (26,0);
        vector<int>S2 (26,0);
        for(int i = 0 ; i < s1.size() ; i++){
            S1[s1[i]-'a']++;
            S2[s2[i]-'a']++;
        }
        int matches = 0 ;
        for(int i = 0 ; i < 26 ; i++){
            if(S1[i] == S2[i]) matches++;
        }
        int l = 0;
        for(int r = s1.length() ; r < s2.length() ; r++){
            if(matches == 26) return true;
            S2[ s2[r] -'a']++;
            if(S2[s2[r] -'a'] == S1[s2[r] -'a'])
                matches++;
            else if(S2[s2[r] -'a']  == S1[s2[r] -'a'] + 1)
                matches--;
            
            S2[ s2[l] -'a']--;
            if(S2[s2[l] -'a'] == S1[s2[l] -'a'])
                matches++;
            else if(S2[s2[l] -'a'] == S1[s2[l] -'a'] - 1 )
                matches--;
            l++;
        }
        return matches == 26;
    }
};
