public class Solution {
    public int MySqrt(int x) {
        double temp=x/2.0;
        for(int i=0;i<50;i++){
            temp=(temp+x/temp)/2.0;
        }
        return (int)temp;
    }
}