class Solution {
public:
    bool isPowerOfFour(int n) {
        int mask = n & 0x55555555;
        if (n <= 0) return false;
    if ((n&(n-1)) == 0){
        if ((mask & n) == 0) return false;
        else return true;
    }
    else return false;
    }
};