public class Solution {
    public int Reverse(int x) {
        int ans=0;
        bool positive=x>0;
        int pow=1;
        x=x>0?x:x*(-1);
        int temp=x;
        if(x>=Math.Pow(2,32)||x<=-2147483648) return 0;
        while(x/10>=1){
            x=x/10;
            pow=pow*10;
        }
        while(pow>=1){
            int tempans;
            int organs=ans;
            tempans=(temp%10)*pow;
            ans=ans+tempans;
            if(tempans/pow!=temp%10||ans-organs>9*pow&&pow<1000000000) return 0;
            else if(tempans/pow!=temp%10||pow==1000000000&&temp%10>=3) return 0;
            pow=pow/10;
            temp=temp/10;
        }
        if(ans<0) return 0;
        ans=positive?ans:ans*(-1);
        return ans;
    }
}