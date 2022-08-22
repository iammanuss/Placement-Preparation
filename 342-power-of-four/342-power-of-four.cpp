class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        int number_of_1_bit = __builtin_popcount(n);
        if(number_of_1_bit > 1) return false;
        int pos = 0;
        while(n > 0) {
            pos++;
            n = (n>>1);
        }
        return pos&1;
    }
};