class Solution {
public:
    int mySqrt(int x) {
        int low = 0 ; 
        int high = x;
        int sol ;
        while( low <= high ){
            int mid = (low+high)/2;
            if((long long) mid*mid == x){
                return mid;
            }
            else if((long long) mid*mid > x){
                high = mid - 1;
            }
            else if((long long) mid*mid < x){
                sol = mid;
                low = mid + 1;
            }
        }
        return sol;
    }
};