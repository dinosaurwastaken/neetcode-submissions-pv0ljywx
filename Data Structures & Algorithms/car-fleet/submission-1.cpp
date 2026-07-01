class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>pos_speed;
        int n = position.size();
        
        for(int i = 0 ; i < n ; i++){
            pos_speed.push_back({position[i],speed[i]});
        }

        sort(pos_speed.begin(),pos_speed.end());

        vector<double>fleets;

        for(int i = n-1 ; i >=0 ; i--){
            fleets.push_back((target - pos_speed[i].first)/((double)(pos_speed[i].second)));
            if(fleets.size() >=2 && fleets.back() <= fleets[fleets.size()-2]){
                fleets.pop_back();
            }
        }
        return fleets.size();
    }
};
