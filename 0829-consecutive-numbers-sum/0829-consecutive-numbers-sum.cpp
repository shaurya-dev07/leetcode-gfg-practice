class Solution {
public:
    int consecutiveNumbersSum(int n) {
        long long count = 0;
        for(long long k = 1; k*(k-1)/2<n; k++){
            long long remaining = n - k*(k-1)/2;
            if(remaining%k==0){
                count++;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna