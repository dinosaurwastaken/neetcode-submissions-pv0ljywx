class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = arr.size();
        int maxx = 0 ; 
        int cur = 0 ;
        for(int i = 0 ; i < n-1 ; i++){
            if(i%2 == 1 && arr[i] > arr[i+1]){
                cur++;
            }
            else if(i%2 == 0 && arr[i] < arr[i+1]){
                cur++;
            }
            else{
                maxx = max(maxx,cur);
                cur = 0;
            }
            maxx = max(maxx,cur);
        }
        cur = 0;
        for(int i = 0 ; i < n-1 ; i++){
            if(i%2 == 1 && arr[i] < arr[i+1]){
                cur++;
            }
            else if(i%2 == 0 && arr[i] > arr[i+1]){
                cur++;
            }
            else{
                maxx = max(maxx,cur);
                cur = 0;
            }
            maxx = max(maxx,cur);
        }
        return maxx + 1;
    }
};