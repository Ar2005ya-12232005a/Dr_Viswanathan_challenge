#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;


stack <int> s1, s2;
void push(int x){
    s1.push(x);
}

int pop(int n){
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }

    int val = s2.top();
    s2.pop();

    return val;
}


int peek(int n){
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }

    return s2.top();
}

bool empty(){
    return s1.empty() && s2.empty();
}