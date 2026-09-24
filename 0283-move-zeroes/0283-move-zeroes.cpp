class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        vector<int>temp;
        vector<int>temp2;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
            else{
                temp2.push_back(nums[i]);
            }
        }
        copy(temp2.begin(),temp2.end(),back_inserter(temp));
        nums = temp;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna