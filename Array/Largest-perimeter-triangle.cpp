class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
         int ans=0;
         int sum=0;
        for(int i=n-1;i>=2;i--)
        {
            int x=nums[i];
            int y=nums[i-1];
            int z=nums[i-2];
            if((y+z)>x){
                sum=x+y+z;
                ans=max(sum,ans);
            }
        }
        return ans;
    }
};
