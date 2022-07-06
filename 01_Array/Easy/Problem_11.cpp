//  #Problem:- Pascal Triangle- (Level is easy but for understanding it, it is Hard problem)
//  #Tip:- nCr <-- refer the topic permutation and combination  nCr = n! / r! * (n-r)!
//  #Time Complexity:- o(N)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

/**********Optimized Approach***********/
// create answer 2d vector
// us 2 for loop, run outer for loop rows times and inner for loop columns time
// if colum is first of last push_back(1)
// else push_back last row's current and -1 indexed value (which was pushed in 2D vector in last) <-- this comment is hard to understand refer code
// push created row inside 2nd vector

    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> ans;
      for(int i=0;i<numRows;i++){
          vector<int> row;
          for(int j=0;j<=i;j++){
              if(j==0 || j==i){
                  row.push_back(1);
              }else{
                  row.push_back(ans[i-1][j-1]+ans[i-1][j]);
              }
          }
          ans.push_back(row);
      }return ans;
    }
};

int main() {
    //Start Coding
    return 0;
}