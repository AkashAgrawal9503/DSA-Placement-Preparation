//  #Problem:- Two Sum
//  #Tip:- vector_name.size(),
//         sort(v.begine(),v.end())
//  #Time Complexity:- o(n2)       

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        /*********Brute Force*********/

        /* here we use nested forloop to solve this problem */
        for(int i =0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                return {i,j};
            }
            }
        }
        return {0};
        
    }
};

int main() {
    //Start Coding
    return 0;
}