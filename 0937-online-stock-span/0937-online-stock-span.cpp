class StockSpanner {
    
public:
    stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int day=1;
        while(!st.empty()&&price>=st.top().first){
            day+=st.top().second;
            st.pop();
        }
        st.push({price,day});
        return day;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */