class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for(char ch : s){
            if(isalnum(ch)){
                ans += tolower(ch);
            }
        }
        int i = 0, j= ans.size()-1;
        while(i<j){
            if(ans[i]!=ans[j]){
                return false;
            }
            i++;
            j--;
        } 
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna