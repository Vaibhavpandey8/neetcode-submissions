class Solution {
public:
    bool isAnagram(string s, string t) {
        bool result=true;
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
        if(s.size()!=t.size()){
            result=false;
            return result;
        }
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            mp1[t[i]]++;
        }
        for(int i=0;i<26;i++){
            if(mp['a'+i]!=mp1['a'+i]){
                result=false;
            }          
        }
        return result;
    }
};
