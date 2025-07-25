class Solution {
public:
    int jobScheduling(vector<int>& startTimes, vector<int>& endTimes, vector<int>& profits) {
        int numJobs = profits.size(); // Number of jobs

        vector<tuple<int, int, int>> jobs(numJobs);
      
        for (int i = 0; i < numJobs; ++i) {
            jobs[i] = {endTimes[i], startTimes[i], profits[i]};
        }
      
        sort(jobs.begin(), jobs.end());
      
        vector<int> dp(numJobs + 1);
      
        for (int i = 0; i < numJobs; ++i) {

            auto [endTime, startTime, profit] = jobs[i];
          
            int latestNonConflictJobIndex = upper_bound(jobs.begin(), jobs.begin() + i, startTime, [&](int time, const auto& job) -> bool {
                return time < get<0>(job);
            }) - jobs.begin();
          
            dp[i + 1] = max(dp[i], dp[latestNonConflictJobIndex] + profit);
        }
      
        return dp[numJobs];
    }
};