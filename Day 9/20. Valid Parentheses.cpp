class Solution {
public:
    bool isValid(string s) {
        
        int n = s.size();
        stack<char> st;
        
        for(int i=0;i<n;i++){
  
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                
                if(s[i] == ']' && st.top() == '['){
                    st.pop();
                }
                else if(s[i] == '}' && st.top() == '{'){
                    st.pop();
                }
                else if(s[i] == ')' && st.top() == '('){
                    st.pop();
                }
                else{
                    cout<<"2"<<endl;
                    return false;
                }
            }
        }
        return st.empty();
    }
};
