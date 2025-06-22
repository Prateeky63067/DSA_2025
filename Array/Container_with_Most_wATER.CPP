class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxAns=INT_MIN;


        while(i<j)
        {
           int currAns=(j-i)*min(height[i],height[j]);
           maxAns=max(maxAns,currAns);
           if(height[i]<height[j])
           {
            i++;
           }else{
            j--;
           }
        }
        return maxAns;
    }
};
