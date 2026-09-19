class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int n1 = word1.size(),n2 = word2.size(),a=0,b=0;
        while (a<n1 and b<n2){
            s += word1[a];
            s += word2[b];
            a++;
            b++;
        }
        s.append(word1.begin()+a,word1.end());
        s.append(word2.begin()+b,word2.end());
        return s;
    
    }
};