class Solution {
public:
    int characterReplacement(string s, int k) {
        int max_f = 0;
        int left = 0;
        int result = 0;
        vector<int>counts(26,0);
        for(int right =0;right<s.length();right++){
            counts[s[right]-'A']++;
            max_f = max(max_f,counts[s[right]-'A']);
            while((right-left+1)-max_f > k){
                counts[s[left]-'A']--;
                left++;
            }
            result = max(result,right-left+1);
        }
        return result;
    }
};
