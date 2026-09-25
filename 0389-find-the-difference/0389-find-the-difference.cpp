class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26] = {0};
        for (char x :s){
            freq[x-'a']++;
        }
        for(char d:t){
            freq[d-'a']--;
        }
        for (int i=0;i<26;i++){
            if (freq[i] == -1){
                return char(i+'a');
            }
        }
        return 'a';
    }

};