class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        map<int,multiset<int>>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                 int diff=i-j;
                 mp[diff].insert(mat[i][j]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                 int diff=i-j;
                mat[i][j] = *mp[diff].begin();
                mp[diff].erase(mp[diff].begin());
            }
        }
        return mat;
    }
};
