class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int minutes= minutesToTest/minutesToDie;
        return ceil(log(buckets)/log(minutes+1));
    }
};