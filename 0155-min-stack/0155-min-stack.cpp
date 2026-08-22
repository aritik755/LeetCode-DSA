#define ll long long int
class MinStack {
public:
    stack<ll> st;
    ll min;
    MinStack() {
        min = INT_MAX;
    }
    
    void push(int value) {
        if(st.empty()){
            min = value;
            st.push(value);
        }
        else{
            st.push(value-min);
            if(min>value) min = value;
        }
    }
    
    void pop() {
        if(!st.empty()){
            if(st.top() >= 0) st.pop();
            else{
                min = min - st.top();
                st.pop();
            }
        }
    }
    
    int top() {
        if(st.size() == 1) return st.top();
        else if(st.top() < 0) return min;
        else return min + st.top();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */