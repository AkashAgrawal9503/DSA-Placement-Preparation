//  #Problem:- product of array except self
//  #Tip:- prefix sum
//  #Time Complexity:- o(N)

/**********Brute Force***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {


/**********Optimized Approach***********/
// watch the video -> https://www.youtube.com/watch?v=3X9-qs1Lwe4
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p1=1;
        int p2=1;
        int n = nums.size();
        vector<int>ans(n,1);
        for(int i =0;i<n;i++){
            ans[i]=p1;
            p1=p1*nums[i];
        }
        
        for(int i=n-1;i>=0;i--){
            ans[i]=p2*ans[i];
            p2=p2*nums[i];
        }
        return ans;
    }
};




int main() {
    //Start Coding
    return 0;
}