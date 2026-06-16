#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;



int PerfectNumber(int num){

    if(num <= 1){
        return false;
    }

    int sum = 1;
    for(int i = 2; i< num; i++){
        if(num % i == 0){
            sum += i;

            if(i != num/i){
                sum += num/i;
            }
        }
    }

    return num == sum;

}