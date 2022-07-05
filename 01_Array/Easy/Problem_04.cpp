//  #Problem:- More Zero to right
//  #Tip:- vector_name.erase(vector_name.begin()+index) <-- will remove element at index
//   vector_name.erase(vector_name.begin(),vector_name.begine()+3) <-- will remove first 3 elements
//  #Time Complexity:- o(n)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    /*********Brute Force*********/
// remove 0 with nums.erase(nums.begin()+index)
// push 0 at the end and decrease the size of vector so that iterator will not react to till the pushed array

    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        while(i<n){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                n--;
            }else{
                i++;
            }
            
        }
    }

    /*********Optimized Approach*********/
// variable j = 0;
//if i'th element is not 0 then at j'th position assign that integer 
// run for loop from j'th index till the size of vector 

public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }


};

int main() {
    //Start Coding
    return 0;
}