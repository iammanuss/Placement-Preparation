class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans = "", majors, minors;
        int mx = max(a, b), mn = min(a, b);
        
        if(b == mx) majors = "bb", minors = "a";
        else majors = "aa", minors = "b";
                
        while(mx > 0)
        {
            if(mx == mn)
            {
                if(mx > 1) ans += majors;
                else if(mx <= 1) ans += majors[0];

                if(mn > 1) ans += (minors + minors);
                else if(mn <= 1) ans += minors;   
                mx -= 2, mn -= 2;
            }
            else
            {
                if(mx > 1) ans += majors;
                else if(mx <= 1) ans += majors[0];

                if(mn > 0) ans += minors[0];

                mx -= 2, --mn;   
            }
        }
        
        while(mn-- > 0) ans += minors;
        return ans;
    }
};