class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int n = arr.size();
        int l = 0 ; 
        int r = n - 1;
        int diff = r - l + 1;
        while(diff != k){
            if(abs(arr[l] - x) > abs(arr[r]-x)){
                l++;
            }
            else{
                r--;
            }
            diff = r - l + 1;
        }
        return vector<int>(arr.begin() + l, arr.begin() + r + 1);
    }
};