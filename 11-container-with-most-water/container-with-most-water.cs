public class Solution {
    public int MaxArea(int[] height) {
        int currentmax=0;
        int end=height.Length-1;
        int i=0;
        while(i<end){
            int current=(end-i)*Math.Min(height[end],height[i]);
            currentmax=currentmax>current? currentmax:current;
            if(height[i]<height[end]) i++;
            else end--;
        }
        return currentmax;
    }
}