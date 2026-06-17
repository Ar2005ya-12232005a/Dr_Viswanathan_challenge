#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;


bool validPerfect(int n){
    int left = 1;
    int right = n;

    while(left <= right){
        int mid = (left + right)/2;
        int square = mid*mid;

        if(square == n){
            return true;
        }

        if( square < n ){
            left = mid+1;
        }

        if(square > n){
            right =  mid-1;
        }
    }
}