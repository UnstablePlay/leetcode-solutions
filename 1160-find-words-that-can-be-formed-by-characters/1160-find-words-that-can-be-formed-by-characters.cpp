class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum=0;
        int count[26]={0};
        for (char x : chars){
            count[x-'a']++;
        }
        for (string word : words){
            bool check = true;
            int local_count[26]={0};
            if (word.size() > chars.size()) continue;
            else{
                for (int i=0;i<26;i++){
                    local_count[i] = count[i];
                }
                for(char y: word){
                    local_count[y-'a']--;
                    if (local_count[y-'a']<0){
                        check = false;
                        break;
                    }
                }
            }
            if (check == true) sum = sum+word.size();
        }
        return sum;
        
    }
};