#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // Min-heap to store the k largest elements
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for (int num : nums) {
            minHeap.push(num);
            if (minHeap.size() > k)
                minHeap.pop();
        }
        
        return minHeap.top(); // kth largest
    }
};