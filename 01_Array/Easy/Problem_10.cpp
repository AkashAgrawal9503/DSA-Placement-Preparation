//  #Problem:- Square of Sorted Array
//  #Tip:- abs() <-- gives us absolute value ex:-  abs(-5) = | -5 | = 5
//         vector <int> res (5)<-- will allocate 5 slot of int not that (5) after variable name is use to initialize vector length
//  #Time Complexity:- o(N)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;




class Solution {
public:

/**********Brute Force***********/
//just make square of each element in the array and use sort function


    vector<int> sortedSquares(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        
        sort(nums.begin(),nums.end());
        return nums;
    }


/**********Optimized Approach***********/
// compare last and first element using abs() function which ever is high, square it and push it to the end of the result array
// return result array 

vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        int start=0;
        int end=n-1;
        
        vector <int> res(n);
        int pos = n-1;
        
        while(start <= end)
        {
            if(abs(nums[start]) < abs(nums[end])) {
                res[pos--] = nums[end] * nums[end];
                end--;
            } else{
                res[pos--] = nums[start] * nums[start];
                start++;
            }
        }
        
        return res;
    }
};


int main() {
    //Start Coding
    return 0;
}