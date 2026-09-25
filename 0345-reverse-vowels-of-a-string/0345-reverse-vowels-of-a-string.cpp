class Solution {
public:
    string reverseVowels(string s) {        
        string str = "aeiouAEIOU";
        char w;
        int a =0, b =s.length()-1;
        while (a<b){
            if ((str.find(s[a]) != string::npos) and (str.find(s[b]) != string ::npos)){
            w = s[a];
            s[a] = s[b];
            s[b] = w;
            a++;
            b--;
        }
        else if ((str.find(s[a]) != string::npos) and (str.find(s[b]) == string ::npos)) b--;        
        else if ((str.find(s[a]) == string::npos) and (str.find(s[b]) != string ::npos)) a++;
        else{            
            a++;
            b--;
        }
        }
        return s;
        
    }
};