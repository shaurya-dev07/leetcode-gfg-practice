class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if(n<=1){
            return;
        }

        vector<int>temp(n);

        for(int i=0; i<nums.size(); i++){
            temp[(i+k)%n] = nums[i];
        }

        nums = temp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna