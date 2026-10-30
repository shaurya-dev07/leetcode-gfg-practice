class Solution {
public:
    int longestPalindrome(string s) {
        int oddCount = 0;
        unordered_map<char,int> m;
        for(char ch : s){
            m[ch]++;
            if(m[ch]%2!=0){
                oddCount++;
            }
            else{
                oddCount--;
            }
        }
        if(oddCount>1) return s.size()-oddCount+1;

        return s.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna