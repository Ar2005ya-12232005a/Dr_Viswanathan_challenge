#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;

int main(){
    
    return 0;
}


class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        
        // Step 1: Reverse entire string
        reverse(s.begin(), s.end());
        
        int i = 0, l = 0, r = 0;
        
        while (i < n) {
            while (i < n && s[i] == ' ') i++;   // skip spaces
            if (i >= n) break;
            
            if (r > 0) s[r++] = ' '; // add single space
            
            l = r;
            while (i < n && s[i] != ' ') {
                s[r++] = s[i++];
            }
            
            reverse(s.begin() + l, s.begin() + r);
        }
        
        s.erase(s.begin() + r, s.end());
        return s;
    }
};
