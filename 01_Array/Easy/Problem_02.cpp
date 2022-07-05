//  #Problem:- Best time to buy and sell stock
//  #Tip:- use veriables buy, sell and set buy to maximum value and sell to 0
//  #Time Complexity:- o(n)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    /*********Brute Force*********/

//  #Tip:- use nested for lopp
//  #Time Complexity:- o(n2)

    int maxProfit(vector<int>& prices) {
        int maximumProfit = 0;
        for(int i =0;i<prices.size()-1;i++){
            for (int j = i+1; j < prices.size(); j++)
            {
                if((prices[j]-prices[i])>maximumProfit){
                    maximumProfit= prices[j]-prices[i];
                }
            }
            
        }
        return maximumProfit;
    }


    /*********Optimized Force*********/

//  #Tip:- use variable sell,buy and set them 0,maximum value ,
//  then we iterate loop o(n) times and check i'th day with buy and sell if is less then but and greater then sell
//  #Time Complexity:- o(n2)


    int maxProfit(vector<int>& prices) {
        int buy = 10000;
        int sell =0;
        for (int i = 0; i < prices.size(); i++)
        {
            if(prices[i]<buy){
                buy = prices[i];
            }
            if(sell>prices[i]-buy){
                sell = prices[i]-buy;
            }
        }
        return sell;
    }



};

int main() {
    //Start Coding
    return 0;
}