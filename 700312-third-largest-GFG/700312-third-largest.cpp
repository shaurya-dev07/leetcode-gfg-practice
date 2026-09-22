class Solution {
public:
    int thirdLargest(vector<int> &nums) {

        if (nums.size() < 3) {
            return -1;
        }

        int largest = 0;
        int slargest = 0;
        int tlargest = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] >= largest) {
                tlargest = slargest;
                slargest = largest;
                largest = nums[i];
            }
            else if (nums[i] >= slargest) {
                tlargest = slargest;
                slargest = nums[i];
            }
            else if (nums[i] >= tlargest) {
                tlargest = nums[i];
            }
        }

        return tlargest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna