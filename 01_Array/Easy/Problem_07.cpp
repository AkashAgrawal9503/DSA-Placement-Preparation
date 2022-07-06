//  #Problem:- Find Pivot Point
//  #Tip:- for(int num:nums){num <-- this is iterator or forEach loop}
//  #Time Complexity:- o(n)

/**********Brute Force***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {

/**********Optimized Approach***********/
// logic:- at pivot point this happens :-
// 2* sum of all element = total - that perticular index value 
// E.g. - 1 | 4 | 6 | 3 | 2
// here total is 16, sum of left at index 2 will be 5
// hence 2 * 5(sum) == 16 (total) - 6 (value at that index);


public:
    int pivotIndex(vector<int>& nums) {
        // add sum of all element in total
        int total = 0;
        for(int num:nums){
            total+=num;
        }
        int sum =0;
        // check sum*2 == (total - perticuler index)
        for(int i =0;i<nums.size();i++){
            if(2*sum==(total-nums[i])){
                return i;
            }
            sum+=nums[i];
            
        }
        return -1;
    }
};

int main() {
    //Start Coding
    return 0;
}