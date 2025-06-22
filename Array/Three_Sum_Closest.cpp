class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int minDiff=INT_MAX;
        int ans=0;
        sort(nums.begin(),nums.end());


        for(int i=0;i<n;i++)
        {
          int j=i+1;
          int k=n-1;
          while(j<k)
          {
            int sum=nums[i]+nums[j]+nums[k];
            int diff=abs(target-sum);
            if(minDiff>diff)
            {
              minDiff=diff;
              ans=sum;
            }
            if(sum>target)
            {
                k--;
            }else{
                j++;
            }
          }
        }
        return ans;
    }
};
