// ******By shorting and using map*****
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>> ans;
        map<string,vector<string>>mp;
        for(int i=0;i<str.size();i++)
        {
            string temp=str[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(str[i]);
        }
        for(auto val:mp)
        {
            ans.push_back(val.second);
        }
        return ans;
    }
};


// ******Without  shorting and using map*****
class Solution {
public:
    string generate(string &word)
    {
        int arr[26]={0};


        for(auto &ch:word)
        {
           arr[ch-'a']++;
        }
        string newWord="";
        for(int i=0;i<26;i++)
        {
            if(arr[i]>0)
            {
              newWord+=string(arr[i],i+'a');
            }
        }
        return newWord;
    }
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>> ans;
        map<string,vector<string>>mp;
        for(int i=0;i<str.size();i++)
        {   string temp=str[i];
            string newWord=generate(temp);
            mp[newWord].push_back(str[i]);
        }
        for(auto val:mp)
        {
            ans.push_back(val.second);
        }
        return ans;
    }
};
