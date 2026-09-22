class Solution {
  public:
    vector<int> getMinMax(vector<int> &nums) {
        // code here
        int min = nums[0];
        int max = nums[0];
               for(int i=1; i<nums.size(); i++){
                   if(nums[i]>max){
                       max = nums[i];
                   }
                   else if(nums[i]<min){
                       min = nums[i];
                   }
               }
        vector<int> min_max  = {min,max};      
        return min_max ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna