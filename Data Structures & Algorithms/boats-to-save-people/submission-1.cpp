class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count = 0;
        int sum = 0;
        int l = 0 ;
        int r = people.size() - 1;
        while(l <= r){
            if(l == r){
                return count + 1;
            }
            sum = people[l] + people[r];
            if(sum <= limit){
                count++;
                l++;
                r--;
            }
            else{
                count++;
                r--;
            }
        }
        return count;
    }
};