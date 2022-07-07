//  #Problem:- subarray sum equal to k
//  #Tip:- use map to solve it in O(N) I didn't understand it now so it didin't add that optimized code here
//  #Time Complexity:- o(N)

/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
    
/**********Brute Force***********/



public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size(); // taking the size of the array
        
        int ans = 0; // ans variable to store our count
        
        for(int i = 0; i < n; i++) // traverse from the array
        {
            int sum = arr[i]; // provide sum with arr[i]
            
            if(sum == k) // if element itself equal to k, then also increment count
                ans++;
            
            for(int j = i + 1; j < n; j++) // now moving forward,
            {
                sum += arr[j]; // add elements with sum
                
                if(sum == k) // if at any point they become equal to k
                    ans++; // increment answer
            }
            
        }
        
        return ans; // and at last, return answer
    }
};

int main() {
    //Start Coding
    return 0;
}