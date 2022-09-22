class Solution {
    void rev(string& s, int i, int j)
    {
        if(j>=s.size()) j=s.size()-1;
        while(i<j)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
public:
    string reverseStr(string s, int k) {
        
        int i=0;
        while(i<s.size())
        {
            rev(s, i, i+k-1);
            i+=2*k;
        }
        return s;
    }
};