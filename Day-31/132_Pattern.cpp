#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#include <utility>
using namespace std;

bool find132pattern(vector<int>& nums) {
    int third = INT_MIN;
    stack<int> st;

    // Traverse from right to left
    for (int i = nums.size() - 1; i >= 0; i--) {

        // If current element is smaller than 'third',
        // we found nums[i] < nums[k] < nums[j]
        if (nums[i] < third)
            return true;

        // Update 'third' with elements smaller than current
        while (!st.empty() && nums[i] > st.top()) {
            third = st.top();
            st.pop();
        }

        st.push(nums[i]);
    }

    return false;
}

int main() {
    vector<int> nums = {-1, 3, 2, 0};

    if (find132pattern(nums))
        cout << "true";
    else
        cout << "false";

    return 0;
}