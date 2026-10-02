class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> res;
        map<int,string,greater<int>> s;
        for (int i=0;i<heights.size();i++){
            s[heights[i]] = names[i];
        }
        for (const auto& [height, name] : s){
            res.push_back(name);
        }
        return res;
        
    }
};