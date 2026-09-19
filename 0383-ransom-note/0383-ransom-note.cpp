class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int a=0,b=0;
       sort (ransomNote.begin(),ransomNote.end());
       sort (magazine.begin(),magazine.end());
       while (a<ransomNote.size() and b<magazine.size()){
        if ( ransomNote[a] == magazine[b]){
            a++;
            b++;
        }
        else b++;

       } 
       if (a == ransomNote.size()) return true;       
       else return false;
    }
};