class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mp;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>ans;
        bool flag=true;
        int count=0;
        for(auto val:mp)
        {
           vector<int>v=val.second;
           if(count%2==0)
           {
            reverse(v.begin(),v.end());
           }
           count++;
           for(int i=0;i<v.size();i++)
           {
            ans.push_back(v[i]);
           }


        }
        return ans;
    }
};
