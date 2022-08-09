class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<long long,long long>mp;
        mp[arr[0]]=1;
        for(int i=1;i<arr.size();i++){
            long long cnt=1;
            for(auto a:mp){
                int ele=a.first;
                if((arr[i]%ele==0) && (mp.find(arr[i]/ele)!=mp.end())){
                    cnt+=mp[ele]*mp[arr[i]/ele];
                }
                mp[arr[i]]=cnt;
            }
        }
        int ans=0;
        for(auto i:mp)  ans=(ans+i.second)%1000000007;
        return ans;
    }
};