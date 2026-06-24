class Solution {
public:
    static bool compare(const vector<int>& temp1, const vector<int>& temp2) {
        int dist1 = temp1[0] * temp1[0] + temp1[1] * temp1[1];
        int dist2 = temp2[0] * temp2[0] + temp2[1] * temp2[1];
        return dist1 < dist2; 
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> dist = points;
        sort(dist.begin(),dist.end(),compare);
        return vector<vector<int>>(dist.begin(),dist.begin()+k);
    }
};
