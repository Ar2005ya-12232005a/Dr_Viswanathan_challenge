#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;




class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        int count = 0;

        for (int num : nums) {
            count += freq[num];  // pairs formed with previous same numbers
            freq[num]++;
        }

        return count;
    }
};