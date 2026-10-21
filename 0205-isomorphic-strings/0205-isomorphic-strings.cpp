class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int last_seen_s[256]={0};
        int last_seen_t[256]={0};
        for (int i=0;i<s.size();i++)
        {
            if (last_seen_s[s[i]] == last_seen_t[t[i]])
            {
                last_seen_s[s[i]] = i+1;
                last_seen_t[t[i]] = i+1;
            }
            else return false;
        }
        return true;
    }
};