class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()) return "";
        unordered_map<char,int>need;
        for(char c : t){
            need[c]++;
        }
        int start = 0;
        int left = 0;
        int minlen = INT_MAX;
        int required = t.size();
        for(int right=0;right<s.size();right++){
            if(need[s[right]]>0){
                required--;
            }
            need[s[right]]--;
            while(required==0){
                if(right-left+1 < minlen){
                    minlen = right-left+1;
                    start = left;
                }
            need[s[left]]++;
            if(need[s[left]]>0){
                required++;
            }
            left++;
            }
        }
        return (minlen==INT_MAX) ? "" : s.substr(start,minlen);

    }

};
