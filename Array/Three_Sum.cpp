class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int n=nums.size();
       vector<vector<int>>ans;
       for(int i=0;i<n-2;i++)
       {
        if(i>0&&nums[i-1]==nums[i])continue;
        int j=i+1;
        int k=n-1;
        int target=-nums[i];
        while(j<k)
        {
            if(nums[j]+nums[k]==target)
            {
               ans.push_back({nums[i],nums[j],nums[k]});
               j++;
               k--;
               while(j<k&&nums[j-1]==nums[j])j++;
               while(j<k&&nums[k]==nums[k+1])k--;
            }else if((nums[j]+nums[k])<target){
                 j++;
            }else{
                 k--;
            }
        }
       


       }
       return ans;
    }
};

