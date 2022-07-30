class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        vector<bool>v(n+1,1);
        v[0]=0;
        v[1]=0;
        for(int i=2;i<n;i++){
                if(v[i] == 1){
                    cnt++;
                    for(int j=2*i;j<n;j=j+i){
                        v[j]=0;
                    }
                }
        }
        return cnt;
    }
};