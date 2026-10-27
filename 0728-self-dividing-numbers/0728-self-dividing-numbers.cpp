class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            bool find = true;
            int temp = i;
            while(temp>0){
                int digit = temp%10;
                if(digit==0 || i%digit!=0){
                    find = false;
                    break;
                }
                temp/=10;
            }
            if(find == true){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna