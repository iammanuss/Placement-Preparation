class Solution {
public:
    int getSum(int a, int b) {
        int carry=0,ans=0;
        for(int pos=0;pos<32;pos++){
            int bit1=(a>>pos)&1;
            int bit2=(b>>pos)&1;
            int bit=bit1^bit2^carry;
            if(bit){
                ans^=(1<<pos);
            }
            if(!carry){
                if(!bit){
                    if(bit1){
                        carry=1;
                    }
                }
            } else {
                if(!bit){
                    carry=1;
                } else {
                    if(!bit1){
                        carry=0;
                    }
                }
            }
        }
        return ans;
    }
};