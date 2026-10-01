class Solution {
public:
    bool isValid(string s) {
        stack <char> st;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(st.empty()){
                    return false;
                }
                else if((s[i]=='}'&&st.top()!='{') ||
                        (s[i]==']'&&st.top()!='[') || 
                        (s[i]==')'&&st.top()!='(')){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna