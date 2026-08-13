class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            // Opening bracket
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            // Closing round bracket
            else if(s[i] == ')') {
                if(st.empty() || st.top() != '(') {
                    return false;
                }
                st.pop();
            }
            // Closing curly bracket
            else if(s[i] == '}'){
                if(st.empty() || st.top() != '{') {
                    return false;
                }
                st.pop();
            }
            // Closing square bracket
            else if(s[i] == ']') {
                if(st.empty() || st.top() != '[') {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};