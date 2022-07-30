class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long>p,f;
        p.insert(1);
        while(f.size()!=n){
            long long num=*p.begin();
            f.insert(num);
            p.erase(num);
            p.insert(2*num);
            p.insert(3*num);
            p.insert(5*num);
        }
        return *f.rbegin();
    }
};