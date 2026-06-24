class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> minheap;
    int kth;
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        for(auto it: nums){
            minheap.push(it);
            if(minheap.size() > k){
                minheap.pop();
            }
        }
    }
    
    int add(int val) {
        minheap.push(val);
        if(minheap.size() > kth){
            minheap.pop();
        }
        return minheap.top();
    }
};
