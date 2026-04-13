class Solution {
public:
    int day(vector<int>&weights , int wt){
        int day = 0;
        int sum = 0;
        for(auto it : weights){
            sum += it;
            if(sum == wt){
                day++;
                sum = 0;
            }
            else if(sum > wt){
                day++;
                sum = it;
            }
        }
        if(sum > 0) return day+1;
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int high = 0 ;
        for(auto it : weights){
            high += it;
        }
        int low = *max_element(weights.begin(),weights.end());
        int ans = 0;
        while(low <= high){
            int mid = (low + high)/2;
            int D = day(weights,mid);
            cout << "mid " << mid << endl;
            cout << "D " << D << endl;
            if(D <= days){
                high = mid - 1;
                ans = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};