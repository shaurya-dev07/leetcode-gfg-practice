class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        for(int i= 0; i<nums.size()+1; i++){
            bool found = false;
            for(int j = 0; j<nums.size(); j++){
                if(nums[j]==i){
                   found  = true;
                   break;
                }
            }
            if(found == false){
                return i;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna