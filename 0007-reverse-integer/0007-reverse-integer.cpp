class Solution {
public:
    int reverse(int x) {
        int nex=0;
        while(x!=0){
            int digit = x%10;
            if (nex > INT_MAX / 10 || (nex == INT_MAX / 10 && digit > 7)) return 0;
            if (nex< INT_MIN/10 || (nex == INT_MIN /10 && digit<-8)) return 0;
            else{
                nex = nex*10+digit;
            }        
            x = x/10;
            
        }
        return nex;
    }
};