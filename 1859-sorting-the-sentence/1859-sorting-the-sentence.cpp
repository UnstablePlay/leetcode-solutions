class Solution {
public:
    string sortSentence(string s) {
        s += ' ';
        string res[10];
        string temp = "";
        for (char word :s)
        {
            
            if (word != ' ') temp += word;
            else
            {
                int d = temp.back()-'0';
                temp.pop_back();
                res[d] = temp;
                temp = "";
            }
        }
        string ans = "";
        for (int i =1 ; i<10;i++)
        {
            if (res[i].empty()) break;   

            ans += res[i]+" "  ;
            
        }
        ans.pop_back();
        return ans;

    }
};