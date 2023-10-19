// given array of heights [6,4,2,5,4,6,1,5,3] choose 2 and make container 
// and in that container max water should be contained 

// we have chosen 4 and 6 to make the container
// o(n) solution

class solution{
    public int maxArea(int[] height){
        int l = 0;
        int r = height.length-1;
        int max = 0;
        while(l<r){
            int lh = height[l];
            int rh = height[r];
            int min_h = Math.max(max, min_h*(r-1));
            if(lh<rh) l++;
            else r--;
        }

        return max;
    }
}
