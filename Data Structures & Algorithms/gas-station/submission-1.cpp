class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int g = 0;
        int imain = 0;
        while(imain < n){
            int i = imain;
            while(gas[i] < cost[i] && (i + 1) < n) i++;
            cout << "starting index " << i << endl;
            int curr = i;
            g = gas[i];
            do{
                g = g - cost[i];
                if(g < 0) break;
                if(i + 1 == n)
                    i = 0;
                else
                    i++;
                g += gas[i];
            }while(g > 0 && i != curr);
            if(i == curr && g >= 0) 
                return i;
            else
                imain = curr + 1;
        }
        return -1;
    }
};
