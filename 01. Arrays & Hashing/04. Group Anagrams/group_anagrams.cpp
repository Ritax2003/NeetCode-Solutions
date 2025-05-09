class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(string s : strs){
            string sortedstr = s;
            sort(sortedstr.begin(),sortedstr.end());
            mp[sortedstr].push_back(s);
        }
        for(auto &it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
