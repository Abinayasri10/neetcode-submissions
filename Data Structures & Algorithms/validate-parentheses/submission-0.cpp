class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        for(char c:s){
            if(c=='(' || c=='[' || c=='{'){
                sk.push(c);
            }else{
                if(sk.empty()) return false;
                char top = sk.top();
                if((c==')' && top == '(') || (c==']' && top =='[') || (c=='}' && top=='{')){
                    sk.pop();
                }else{
                    return false;
                }
            }
        }
        return sk.empty();
    }
};
