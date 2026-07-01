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

    string gcdOfStrings(string str1, string str2) {

        // Check if a common divisor is possible
        if (str1 + str2 != str2 + str1)
            return "";

        // Find GCD of lengths
        int g = gcd(str1.size(), str2.size());

        // Return prefix of length g
        return str1.substr(0, g);
    }
};