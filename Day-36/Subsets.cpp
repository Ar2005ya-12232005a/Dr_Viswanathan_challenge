#include <iostream>
#include <vector>
using namespace std;

void solve(int index, vector<int>& nums, vector<int>& subset, vector<vector<int>>& ans) {
    // Base case
    if (index == nums.size()) {
        ans.push_back(subset);
        return;
    }

    // Include current element
    subset.push_back(nums[index]);
    solve(index + 1, nums, subset, ans);

    // Backtrack
    subset.pop_back();

    // Exclude current element
    solve(index + 1, nums, subset, ans);
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans;
    vector<int> subset;

    solve(0, nums, subset, ans);

    cout << "All Subsets:\n";
    for (auto &v : ans) {
        cout << "[";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i != v.size() - 1)
                cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}