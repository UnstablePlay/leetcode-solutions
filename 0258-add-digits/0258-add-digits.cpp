class Solution {
public:
int Add(int d){
    int s =0;
    if (d>= 0 and d <=9) return d;
    while (d >0){
        int b = d%10;
        s = s+b;
        d = d/10;
    }
    return Add(s);
}
    int addDigits(int num) {
        int res =0;         
         res = Add(num);
         return res;
        
    }
};