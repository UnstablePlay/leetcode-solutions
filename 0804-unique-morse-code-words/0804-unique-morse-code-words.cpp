class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    unordered_set<string> s;
    for (string word : words){
        string code ="";
        for (char letter : word){
            int index = letter-'a';
            code += morse[index];
        }
        s.insert(code);
        
    }
    return s.size();

    }

};