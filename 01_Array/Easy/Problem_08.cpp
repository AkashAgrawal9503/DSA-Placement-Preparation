//  #Problem:- Mejority Element
//  #Tip:- sort vector , check i'th element with i + n/2'th element
//  #Time Complexity:- o(N)

/**********Brute Force***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {

/**********Optimized Approach***********/

//sort vector , check i'th element with i + n/2'th element

public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            
            if(nums[i]==nums[i+(nums.size()/2)]) {
                return nums[i];
            }
            

        }return -1;
        
    }
};

int main() {
    //Start Coding
    return 0;
}