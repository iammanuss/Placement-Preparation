class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        bool temp=1;
        for(int i=1;i<suits.size();i++){
            if(suits[i]!=suits[i-1]) {
                temp=0;
                break;
            }
        }
        if(temp) return "Flush";
        map<int,int>mp;
        for(auto i:ranks){
            mp[i]++;
        }
        int f=0;
        for(auto i:mp){
            if(i.second >=3) return "Three of a Kind";
            if(i.second == 2) f=1;
        }
        if(f) return "Pair";
        else    return "High Card";
    }
};