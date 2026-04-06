class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        if(strs.size() == 1){
            return strs[0];
        }
        int n = strs.size();
        int len = 0;
        for(int j = 0 ; j < strs[0].size() ;j++){
            if(j == 1 && len == 0)
                return "";
            char currchar = strs[0][j];
            int counter = 0;
            
            for(int i = 0 ; i < n ; i++){
                cout << "cur char " << strs[i][j]  << endl;
                if(j > strs[i].size()){
                    break;
                }
                if(strs[i][j] == currchar){
                    
                    counter++;
                    cout << counter << "counter" <<endl;
                    if(counter == n){
                        len++;
                    }
                }
                else{
                    cout << "break " << endl;
                    break;
                }
            }
        }
        return strs[0].substr(0,len);
    }
};