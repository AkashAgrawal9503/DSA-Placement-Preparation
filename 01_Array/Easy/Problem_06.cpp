//  #Problem:- runnign sum of 1d array
//  #Tip:- it is so simple problem solve within 5min
//  #Time Complexity:- o(n)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

/**********Brute Force***********/
/**********Optimized Approach***********/

//iterate through full array and sum the i'th element with privious one and set it to same i'th element 

    vector<int> runningSum(vector<int>& nums) {
        for(int i =1;i<nums.size();i++){
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
    }
};

int main() {
    //Start Coding
    return 0;
}