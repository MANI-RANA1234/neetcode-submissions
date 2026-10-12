class MinStack {
public:

    stack<int> st;
    stack<int> st2;
    // int min1=INT_MAX;
    
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        // min1=min(min1,val);
        if (!st2.empty()){
            if(val<=st2.top()){
                st2.push(val);
            }
            else{
                st2.push(st2.top());
            }
        }
        else
            st2.push(val);
    }
    
    void pop() {
        st.pop();
        st2.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        // return min1;
        return st2.top();
    }
};
