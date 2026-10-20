class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        for(int i = 0; i < nums1.size(); i++){
            int low = 0;
            int high = nums2.size()-1;
            while( low <= high){
                int mid = low + (high - low)/2;
                if(nums1[i] == nums2[mid]){
                    ans.push_back(nums1[i]);
                    break;
                }
                else if(nums1[i] > nums2[mid]){
                    low = mid+1;
                }
                else if(nums1[i] < nums2[mid]){
                    high = mid-1;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna