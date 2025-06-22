class Solution {
public:
    vector<int> findOriginalArray(vector<int>& nums) {
      int n=nums.size();
      if(n%2==1)return {};
      map<int,int>mp;
      for(int i=0;i<n;i++)
      {
        mp[nums[i]]++;
      }
      sort(nums.begin(),nums.end());
      vector<int>ans;
      for(int i=0;i<n;i++)
      {
        if(mp[nums[i]]==0)continue;
        if(mp[2*nums[i]]==0) return {};


        ans.push_back(nums[i]);
        mp[nums[i]]--;
        mp[2*nums[i]]--;
      }
      return ans;
    }
};