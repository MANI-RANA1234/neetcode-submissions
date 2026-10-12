class Solution {
public:
    bool isOperator(string s) {
        return s == "*" || s == "/" || s == "+" || s == "-";
    }
    int fn(char c,int a, int b){
        if(c=='*') return a*b;
        if(c=='/') return b/a;
        if(c=='-') return b-a;
        if(c=='+') return a+b;
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;
        for(string c:tokens){
            // int c = stoi(s);
            if(!isOperator(c)) st.push(stoi(c));
            if(isOperator(c)){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(fn(c[0],a,b));
            }
        }
        return st.top();
    }
};
