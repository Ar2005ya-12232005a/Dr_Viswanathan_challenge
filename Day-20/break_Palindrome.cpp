#include <iostream>
using namespace std;


class Solution {
public:
    string breakPalindrome(string palindrome) {

        int n = palindrome.size();

        // Single character cannot be made non-palindrome
        if (n == 1)
            return "";

        // Traverse only first half
        for (int i = 0; i < n / 2; i++) {

            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }

        // All characters in first half are 'a'
        palindrome[n - 1] = 'b';

        return palindrome;
    }
};

int main(){
    
    return 0;
}