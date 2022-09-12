class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=tokens.size()-1;
        int score=0;
        int maxi=0;
        while(i<=j){
            if(power>=tokens[i]){
                score++;
                power-=tokens[i];
                maxi=max(score,maxi);
                i++;
            }
            else if(score>0){
                power+=tokens[j];
                score--;
                j--;
            }
            else{
                break;
            }
        }
        return maxi;
    }
};