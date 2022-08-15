class Solution {
public:
    string intToRoman(int num) {
        int mp[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans = "";
        
        for(int i=0;i<13;i++){
            while(num>=mp[i]){
                ans=ans+roman[i];
                num-=mp[i];
            }
        }
        return ans;
    }
};