class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<2){
            return 0;
        }
        int dif = 0;
        int maxDif = 0;

        for(int i =1; i<nums.size(); i++){
            dif = abs(nums[i-1]-nums[i]);
            if(dif>maxDif){
                maxDif = dif;
            } 
        }
        return maxDif;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna