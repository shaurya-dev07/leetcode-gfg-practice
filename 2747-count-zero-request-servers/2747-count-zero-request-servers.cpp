class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs,int x, vector<int>& queries) {

        int m = logs.size();
        int q = queries.size();

        
        sort(logs.begin(), logs.end(),[](vector<int>& a, vector<int>& b) {return a[1] < b[1];});

       
        vector<pair<int, int>> sortedQueries;

        for (int i = 0; i < q; i++) {
            sortedQueries.push_back({queries[i], i});
        }

        sort(sortedQueries.begin(), sortedQueries.end());

        vector<int> ans(q, 0);

        unordered_map<int, int> freq;

        int left = 0;
        int right = 0;
        int activeServers = 0;

        for (auto [time, idx] : sortedQueries) {

            int startTime = time - x;

            while (right < m && logs[right][1] <= time) {

                int server = logs[right][0];

                if (freq[server] == 0) {
                    activeServers++;
                }

                freq[server]++;
                right++;
            }

           
            while (left < right && logs[left][1] < startTime) {

                int server = logs[left][0];

                freq[server]--;

                if (freq[server] == 0) {
                    activeServers--;
                }

                left++;
            }

            
            ans[idx] = n - activeServers;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna