//  #Problem:- Merge Sorted Array
//  #Tip:- compare 2 array's indices and push them into new array ,
//   then the remaining array between 2array should be push in last
//  #learning:- vector_name.clear()  // to clear the vector
//              vector_name.insert(pos,value)  // to insert at given position
//  #Time Complexity:- o(m+n)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {


    /*********Brute Force*********/
// first in while loop compare two array's indices and whichever is low push it to demo vector
// after running loop there will be one array left to push inside demo array cause it's iterator will not about to react at the end of the array while looping
// this is why we itererat through remaining array and push it into the demo array then copy that array into nums1 after clear() function 


public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i =0;
        int j =0;
        vector<int> demo;
        
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                demo.push_back(nums1[i]);
                i++;
            }else if(nums1[i]==nums2[j]){
                demo.push_back(nums1[i]);
                demo.push_back(nums2[j]);
                i++;
                j++;
            }else{
                demo.push_back(nums2[j]);
                j++;
            }
        }
        
        if(i<m){
            for(int k =i;k<m;k++){
                demo.push_back(nums1[k]);
            }
        }
          
        if(j<n){
            for(int k =j;k<n;k++){
                demo.push_back(nums2[k]);
            }
        }
        if(!nums1.empty()){
          nums1.clear();

        }
        for(int l=0;l<demo.size();l++){
            nums1.push_back(demo[l]);
        }
    }



};

int main() {
    //Start Coding
    return 0;
}