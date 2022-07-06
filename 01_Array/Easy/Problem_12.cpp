//  #Problem:- Remove duplicate from sorted array
//  #Tip:- like to dislike ratio is too much this is why you can ignore this problem
//  #Time Complexity:- o(N)

/**********Brute Force***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {

/**********Optimized Approach***********/

public:
    int removeDuplicates(vector<int>& nums) {
        int ans = nums.size();
        int i =1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
                --ans;
            }else{
                i++;
            }
        }return ans;
    }
};

int main() {
    //Start Coding
    return 0;
}