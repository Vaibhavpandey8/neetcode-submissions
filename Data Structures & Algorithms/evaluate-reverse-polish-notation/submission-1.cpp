class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if(isdigit(tokens[i][0])||(tokens[i][0] == '-' && tokens[i].size()>1)){
                st.push(stoi(tokens[i]));
            }
            else{
                if(tokens[i]=="+"){
                    int top1=st.top();
                    st.pop();
                    int top2=st.top();
                    st.pop();
                    int res=top2+top1;
                    st.push(res);
                }
                if(tokens[i]=="-"){
                    int top1=st.top();
                    st.pop();
                    int top2=st.top();
                    st.pop();
                    int res=top2-top1;
                    st.push(res);
                }
                if(tokens[i]=="/"){
                    int top1=st.top();
                    st.pop();
                    int top2=st.top();
                    st.pop();
                    int res=top2/top1;
                    st.push(res);
                }
                if(tokens[i]=="*"){
                    int top1=st.top();
                    st.pop();
                    int top2=st.top();
                    st.pop();
                    int res=top2*top1;
                    st.push(res);
                }
            }
        }
        return st.top();
        
    }
};
