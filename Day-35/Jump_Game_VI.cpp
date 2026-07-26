#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int maxResult(vector<int>& nums, int k) {
    int n = nums.size();

    vector<int> dp(n);
    dp[0] = nums[0];

    deque<int> dq;
    dq.push_back(0);

    for (int i = 1; i < n; i++) {

        while (!dq.empty() && dq.front() < i - k)
            dq.pop_front();

        dp[i] = nums[i] + dp[dq.front()];

        while (!dq.empty() && dp[dq.back()] <= dp[i])
            dq.pop_back();

        dq.push_back(i);
    }

    return dp[n - 1];
}

int main() {
    vector<int> nums = {1, -1, -2, 4, -7, 3};
    int k = 2;

    cout << maxResult(nums, k);

    return 0;
}