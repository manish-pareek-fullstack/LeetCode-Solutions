class Solution {
public:
    string removeDuplicates(string s) {
       string ans="";
       stack<char>st;
       for(auto x:s){
        if(st.empty()){
            st.push(x);
        }
        else if(x==st.top()){
            st.pop();
        }
        else {
            st.push(x);
        }
       }
       while(!st.empty()){
        ans+=st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;

    }
};