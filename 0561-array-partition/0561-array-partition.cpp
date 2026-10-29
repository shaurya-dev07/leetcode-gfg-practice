class Solution {
public:
    vector<int> CountingSort(vector<int>& nums) {
        if (nums.empty()) {
            return nums;
        }

        int mini = nums[0];
        int maxi = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < mini) {
                mini = nums[i];
            }

            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }

        vector<int> count(maxi - mini + 1, 0);

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i] - mini]++;
        }

        int index = 0;

        for (int i = 0; i < count.size(); i++) {
            while (count[i] > 0) {
                nums[index] = i + mini;
                index++;
                count[i]--;
            }
        }

        return nums;
    }

    int arrayPairSum(vector<int>& nums) {
        CountingSort(nums);

        int sum = 0;

        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }

        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna