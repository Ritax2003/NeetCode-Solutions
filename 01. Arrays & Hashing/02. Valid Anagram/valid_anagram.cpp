class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(char c : s) mp[c]++;
        for(char c2: t) {
            mp[c2]--;
            if(mp[c2]==0) mp.erase(c2);
        }
        if(mp.size()==0) return true;

        return false;
    }
};
