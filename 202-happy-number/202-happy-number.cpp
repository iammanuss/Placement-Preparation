class Solution {
public:
    bool isHappy(int n) {
        string s= to_string(n);
        while(1){  
            int i=0;
            int j= s.size()-1;
            int sum=0;
            while(i<=j){
                sum+=pow(s[i]-'0',2) + pow(s[j]-'0',2);
                if(i == j) sum-=pow(s[i]-'0',2);
                i++;
                j--;
            }
            if(sum == 1 || sum == 7) return true;
            else if(sum > 1 && sum < 10) return false;
            else{
                s=to_string(sum);
            }
        }
        return false;
    }
};