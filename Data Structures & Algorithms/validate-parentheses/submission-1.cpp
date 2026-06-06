class Solution {
public:
    bool isValid(string str) {
        stack<int> s;
        for(char ch:str){
            if(ch=='(' || ch=='{' || ch=='['){
                s.push(ch);
            }else{
                if(s.empty()) return false;
                char top = s.top();
                if((ch==')' && top=='(')||(ch==']' && top=='[')||(ch=='}' && top=='{')){
                    s.pop();
                }else{
                    return false;
                }
            }
        }
        return s.empty();
    }
};
