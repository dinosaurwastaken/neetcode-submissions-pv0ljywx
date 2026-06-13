class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       vector<int>sol;
        int n = arr.size();
        if(x <= arr[0]){
            for(int i = 0 ; i < k ; i++){
                sol.push_back(arr[i]);
            }
            return sol;
        }
        else if(x >= arr[n-1]){
           for(int i = n-k ; i < n ; i++){
                sol.push_back(arr[i]);
           }
           return sol;
        }
        else{
            int l = n-1 , r = 0;
            while(arr[r] < x) r++;
            while(arr[l] > x) l--;
            if(l > r){
                int temp = l - r;
                swap(l,r);
                for(int i = 0 ; i < temp -1; i++){
                    sol.push_back(x);
                }
            }
            if(r == l){
                sol.push_back(arr[r]);
                r++;
                l--;
            }
            cout << r << " r  l "<< l << endl;
            while(sol.size() < k && l >= 0 && r < n ){
                if(abs(x - arr[l]) <= abs(x-arr[r])){
                    sol.push_back(arr[l]);
                    l--;
                }
                else if(abs(x-arr[l]) > abs(x-arr[r])){
                    sol.push_back(arr[r]);
                    r++;
                }
            }
            while(sol.size() < k){
                if(r == n){
                    sol.push_back(arr[l]);
                    l--;
                }
                else if(l == -1){
                    sol.push_back(arr[r]);
                    r++;
                }
            }
        }
        sort(sol.begin(),sol.end());
        return sol;
    }
};