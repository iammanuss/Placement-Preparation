class Solution {
private:
    vector<int> fun(long n){
        vector<int>num(10);
        while(n){
            num[n%10]++;
            n=n/10;
        }
        return num;
    }
public:
    bool reorderedPowerOf2(int n) {
        vector<int>v=fun(n);
        for(int i=0;i<31;i++){
            if(v==fun(1<<i)){
                return true;
            }
        }
        return false;
    }
};