class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>resstack;
        for(int& ast : asteroids ){
            while(!resstack.empty() && ast < 0 && resstack.back() > 0){
                int dif = ast + resstack.back();
                if(dif < 0){
                    resstack.pop_back();
                }
                else if(dif > 0){
                    ast = 0;
                }
                else{
                    ast = 0;
                    resstack.pop_back();
                }
            }
            if(ast != 0){
                resstack.push_back(ast);
            }
        }
        return resstack;
    }
};