class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
    
    int freqs[26]={0};
    int freqt[26]={0};
    for(int i=0;i<s.size();i++){
        freqs[s[i]-'a']++;
    }
    for(int i=0;i<t.size();i++){
        freqt[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freqs[i]!=freqt[i]) return false;
    }
    return true;
    }
};
