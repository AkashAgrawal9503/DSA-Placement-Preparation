//  #Problem:- next permutation
//  #Tip:- reverse(V.begin();v.end()), sort(v.begin()+index, v.end());
//  #Time Complexity:- o(N)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int c = a;
    a=b;
    b=c;
}

class Solution {
public:


/**********Optimized Approach***********/

//check which element is not in assending order from right to left <---
// then check again from right to left which element is greater then that find element
// swap both element 
// then the element we find in first for loop from that element +1 index to end sort the array

    void runningSum(vector<int>& nums) {
        int n=nums.size();
    // sort(v.begin()+2,v.end());

    int i,j;
        for(i=n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                break;
            }
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }else{
            for(j=n-1;j>i;j--){
                if(nums[j]>nums[i]){
                    break;
                }
            }
            swap(nums[i],nums[j]);
            cout<<i<<" "<<j<<" /";
            sort(nums.begin()+i+1,nums.end());
        }
    }
};


int main() {
    
    return 0;
}