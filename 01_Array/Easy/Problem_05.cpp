//  #Problem:- buy and sell stock -II
//  #Tip:- sliding pointer for bruteforce
//  #Time Complexity:- o(n)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {

    /*********Brute Force*********/
// use sliding pointer , for any 1st,2nd or 3rd pointer value is smaller than other then code accordingly
// watch its optimized approach this is not accepted because of it's high time complexity
public:
    int maxProfit(vector<int>& prices) {
        int i =0;
        int j =1;
        int k = 2;
        vector<int> profit={};
        
        for(;k<prices.size();i++,j++,k++){
            if(prices[i]<prices[j] && prices[i]<prices[k]){
                if(prices[j]>prices[k]){
                   profit.push_back(prices[j]-prices[i]);
                }else{
                   profit.push_back(prices[k]-prices[i]);
                                 i++;j++;k++;
           
                }
            }else if(prices[i]>prices[j] && prices[j]<prices[k]){
                profit.push_back(prices[k]-prices[j]);
                                i++;j++;k++;

            }else{
                i++;j++;k++;
            }
        }
        if(prices[j]>prices[i]){
              profit.push_back(prices[j]-prices[i]);

        }
        
        int sum =0;
        int l=0;
        for(;l<profit.size();l++){
            sum +=profit[l];
        }
        return sum;
    }
};

int main() {
    //Start Coding
    return 0;
}