//  #Problem:- merged interval
//  #Tip:- IMP Question
//  #Time Complexity:- o(N)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

/**********Optimized Approach***********/
// create mergedInterval which we will return 
// then sort the given vector
// initialized temp with 1st vector
// use for loop and check if temp's 1st indexed variable is >= to current iteration's 0th index
// if true then between current or temp's 1st index variable which ever is max store it inside temp's 1st index
// else push temp inside mergedInterval and store the current vector inside temp 
// in last push last vector of intervals which where left to store inside mergedInterval 

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>> mergedIntervals;
        
        if(intervals.size()==0){
            return mergedIntervals;
        }
        
        sort(intervals.begin(),intervals.end());

        vector<int> temp=intervals[0];
        
        for(auto it : intervals){
            if(it[0]<=temp[1]){
                temp[1]=max(it[1],temp[1]);
            }else{
                mergedIntervals.push_back(temp);
                temp = it;
            }
        }
        
        mergedIntervals.push_back(temp);
        
        return mergedIntervals;
       
    }
};

int main() {
    //Start Coding
    return 0;
}