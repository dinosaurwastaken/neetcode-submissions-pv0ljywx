class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int l1 = word1.size() ;
        int l2 = word2.size() ;
        int p1 = 0 ;
        int p2 = 0 ;
        while(p1 < l1 && p2 < l2){
            ans+=word1[p1];
            p1++;
            ans+=word2[p2];
            p2++;
        }
        if(p1 == l1){
            while(p2 < l2){
                ans += word2[p2];
                p2++;
            }
        }
        if(p2 == l2){
            while(p1 < l1){
                ans += word1[p1];
                p1++;
            }
        }
        return ans;
    }
};