class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxCount = 0;
        int currentCount = 1;
        int answer = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                currentCount++;
            }
            else{
                if(currentCount>maxCount){
                    maxCount = currentCount;
                    currentCount = 1;
                    answer = nums[i-1];
                }
                currentCount  = 1;
            }
        }
        if(currentCount > maxCount){
            maxCount = currentCount;
            answer = nums[nums.size()-1];
        }
        return answer;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna