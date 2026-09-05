class Solution {
public:
    int maxArea(vector<int>& height) {
         long long max_w=0,area=0,h,w;
         int r=height.size()-1;
         int l=0;
         while(l<r)
         {
            h=min(height[l],height[r]);
            w=r-l;
          long long a=w*h;
            max_w=max(max_w,a);
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
         }
         return max_w;
         }
};