class Solution {
  public:
    int largest(vector<int> &nums) {
        // code here
        int max = nums[0];
               for(int i=1; i<nums.size(); i++){
                   if(nums[i]>max){
                       max = nums[i];
                   }
               }
               return max;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna