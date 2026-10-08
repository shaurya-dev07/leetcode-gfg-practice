class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }

        int leftSum = 0;
        for(int i=0; i<nums.size(); i++){
            int rightSum = sum - leftSum - nums[i];
            if(leftSum == rightSum){
                return i;
            }
            else{
                leftSum += nums[i];
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna