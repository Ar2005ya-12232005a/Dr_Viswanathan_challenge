#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int Missing_Number(vector<int> &nums){
    int n = nums.size();
    int real_sum = n*(n+1)/2;
    int sum = 0;
    for(int num:nums){
        sum += num;
    }

    return real_sum - sum;

}

int main() {
    vector<int> nums = {3, 0, 1};

    cout << Missing_Number(nums);

    return 0;
}