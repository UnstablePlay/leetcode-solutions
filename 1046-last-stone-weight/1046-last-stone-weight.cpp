class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> py;
        for(int i=0;i<stones.size();i++) py.push(stones[i]);
        while(py.size()>1)
        {
            int a = py.top();
            py.pop();
            int b = py.top();
            py.pop();
            if (a!=b) py.push(a-b);
        }
        if (py.empty()) return 0;
        else return py.top();
    }
};