class Solution {
public:
    vector<string> res;
    void final(string ans, int o, int c)
    {
        if(o==0 && c==0)
        {
            res.push_back(ans);
            return;
        }
        if(o!=0)
        {
            ans.push_back('(');
            final(ans, o-1, c);
            ans.pop_back();
        }
        if(c>o)
        {
            ans.push_back(')');
            final(ans, o, c-1);
            ans.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        final("",n,n);
        return res;
    }
};