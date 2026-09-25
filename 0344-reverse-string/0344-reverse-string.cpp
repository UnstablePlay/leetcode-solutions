class Solution {
public:
    void reverseString(vector<char>& s) {
        char w;
        int a=0 , b = s.size()-1;
        while (a <b){
            w = s[a];
            s[a] = s[b];
            s[b] = w;
            a++;
            b--;
        }
    }
};