class Solution {
public:

    void Merge(vector<int>& arr, int start, int mid, int end){
        int left = start;
        int right = mid+1;

        vector<int> temp;

        while(left<=mid && right<=end){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=end){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i = 0; i<temp.size(); i++){
            arr[start+i] = temp[i];
        }
    }

    void MergeSort(vector<int>& arr, int start, int end){
        if(start>=end){
            return;
        }
        int mid = start + (end-start)/2;
        MergeSort(arr, start, mid);
        MergeSort(arr, mid+1, end);

        Merge(arr, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        MergeSort(nums,0,nums.size()-1);
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna