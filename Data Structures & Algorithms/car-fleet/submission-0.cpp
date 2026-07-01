class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>pos_speed;
        int n = position.size();
        
        for(int i = 0 ; i < n ; i++){
            pos_speed.push_back({position[i],speed[i]});
        }

        sort(pos_speed.begin(),pos_speed.end());
        
        int sol = 0;
        stack<pair<int,int>>fleets;

        for(int i = n-1 ; i >=0 ; i--){
            if(fleets.empty()){
                fleets.push(pos_speed[i]);
                sol++;
            }
            else{
                pair<int,int> holder = fleets.top();
                float t1 = (target - holder.first)/((float)(holder.second));
                float t2 = (target - pos_speed[i].first)/((float)(pos_speed[i].second));
                if(t1 < t2){
                    while(!fleets.empty()){
                        fleets.pop();
                    }
                    fleets.push(pos_speed[i]);
                    sol++;
                }
            }
        }
        return sol;
    }
};
