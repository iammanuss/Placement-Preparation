class Solution {
private:
    int fun(string s){
        int mn=1;
        char mnc='}';
        for(auto i:s){
            if(i==mnc)mn++;
            else if(i<mnc){
                mnc=i;
                mn=1;
            }
        }
        return mn;
    }
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> res,w;
        for(auto i:words)   w.push_back(fun(i));
        for(auto i:queries){
            int c=0;
            int x=fun(i);
            for(auto j:w)
                if(x<j)
                    c++;
            res.push_back(c);
        }
        return res;  
    }
};