class Solution {
public:
    string simplifyPath(string path) {
        vector<string>stack;
        string temp;
        for(char c : path + "/"){
            if(c == '/'){
                if(temp == ".."){
                    if(!stack.empty()) stack.pop_back();
                }
                else if(!temp.empty() && temp != "."){
                    stack.push_back(temp);
                }
                temp.clear();
            }
            else{
                temp+=c;
            }
        }
        string res = "/";
        for(int i = 0 ; i < stack.size() ; i++){
            if(i > 0) res += "/";
            res += stack[i];
        }
        return res;
    }
};