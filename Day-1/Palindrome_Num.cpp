#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;


bool palindrome_NUm(int x){

    

    if(x < 0){
        return false;
        
    }
    int original = x;
    int reverse = 0;

    while(x > 0){
        int digit = x%10;
        reverse = reverse *10 + digit;
        x /= 10;
    }

    return original == reverse;

    
}