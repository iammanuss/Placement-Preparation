class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size(), total = 0 , k=0;
        while(total<=n)
        {
            total+= ++k;
        }
        return k-1;
    }
};