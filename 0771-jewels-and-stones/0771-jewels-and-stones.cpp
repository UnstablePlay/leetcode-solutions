class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int b=0,count=0;
        unordered_set<char> jew;        
        for (char j : jewels){
            jew.insert(j);
        }
        while (b < stones.size()){
            if (jew.find(stones[b]) != jew.end()) count++;
            b++;
        }
        return count;
    }
};