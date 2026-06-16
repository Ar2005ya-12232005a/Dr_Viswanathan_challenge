#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;

int AddNumbers(int num){
    while(num >= 10){
        int sum = 0;

        while(num >0){
            sum += num % 10;
            num/= 10;
        }

        num = sum;
    }

    return num;
}