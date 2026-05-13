class Solution {
public:
    bool checkInclusion(string p, string s) {
        if(s.size()<p.size()) return false;
        vector<int>countS(26,0);
        vector<int>countP(26,0);
        for(char c:p){
            countP[c-'a']++;
        }
        int k = p.size();
        for(int i=0;i<k;i++){
            countS[s[i]-'a']++;
        }
        if(countP==countS) return true;
        for(int end = k;end<s.size();end++){
            countS[s[end]-'a']++;
            countS[s[end-k]-'a']--;
            if(countS==countP) return true;
        }
        return false;
    }
};
