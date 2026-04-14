class TimeMap {
public:
    map<string,vector<pair<string,int>>>tMap;

    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        tMap[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {

        string ans = "";

        for(auto it : tMap){
            if(it.first == key){
                int high = it.second.size() - 1;
                int low = 0;
                while(low <= high){
                    int mid = low + (high-low)/2;
                    if(it.second[mid].second <= timestamp){
                        ans = it.second[mid].first;
                        low = mid + 1;
                    }
                    else{
                        high = mid - 1;
                    }
                }
            }
        }
        return ans;
    }
};
