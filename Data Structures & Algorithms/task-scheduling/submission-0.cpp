class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int>maxHeap;
        int time = 0 ;
        map<char,int>m1;
        queue<pair<int,int>>q;
        for(auto it : tasks){
            m1[it]++;
        }
        for(auto it : m1){
            cout << it.second << endl;
            maxHeap.push(it.second);
        }
        while (!maxHeap.empty() || !q.empty()) {
            time++;

            if (maxHeap.empty()) {
                time = q.front().second;
            } else {
                int cnt = maxHeap.top() - 1;
                maxHeap.pop();
                if (cnt > 0) {
                    q.push({cnt, time + n});
                }
            }

            if (!q.empty() && q.front().second == time) {
                maxHeap.push(q.front().first);
                q.pop();
            }
        }
        return time;
    }
};
