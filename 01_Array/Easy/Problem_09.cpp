//  #Problem:- Febonacci Number
//  #Tip:- use recussion(n-1)+(n-2) and iteration to solve
//  #Time Complexity:- o(N)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {

/**********Brute Force***********/
// standard recursion way to solve it 
int fib(int n) {
        if (n==0){
            return 0;
        }else if(n==1){
            return 1;
        }
        
        return (fib(n-1)+fib(n-2));
    }

/**********Optimized Approach***********/
// iteration method is quit faster than recursion 

public:
    int fib(int n) {
        if (n==0){
            return 0;
        }else if(n==1){
            return 1;
        }
        int last = 1;
        int secondLast = 0;
        int ans =0;
        for(int i =1;i<n;i++){
            ans =last + secondLast;
            secondLast = last;
            last = ans;
            
        }
        return ans;
    }
};

int main() {
    //Start Coding
    return 0;
}