class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> rowMap;
        vector<string> res;
        for (char c : "qwertyuiop") rowMap[c] = 1;
        for (char c : "asdfghjkl")  rowMap[c] = 2;
        for (char c : "zxcvbnm")    rowMap[c] = 3;
        for (const string& word : words){
            int targetrow = rowMap[tolower(word[0])];
            bool r = true;
            for (int i =1; i<word.size();i++){
                if(rowMap[tolower(word[i])] != targetrow){
                    r = false;
                    break;
                }
            }
            if (r == true) res.push_back(word);
        }       
        return res;
    }
};