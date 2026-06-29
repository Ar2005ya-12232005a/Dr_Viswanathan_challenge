#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;


class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];

        for (int num : nums) {
            mini = min(mini, num);
            maxi = max(maxi, num);
        }

        return gcd(mini, maxi);
    }
};