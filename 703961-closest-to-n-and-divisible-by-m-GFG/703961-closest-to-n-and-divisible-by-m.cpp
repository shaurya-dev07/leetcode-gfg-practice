class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int rem = n%m;
        int prev = n-rem;
        int next = (n*m>0)? n+(m-rem):n-(m+rem);

        if(abs(n-prev)<abs(n-next)){
            return prev;
        }
        else{
            return next;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna