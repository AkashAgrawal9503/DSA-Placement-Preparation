//  #Problem:- insert delete get random
//  #Tip:- rand()%6 --> will give us random number from 0 to 6
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#include <cstdlib> 
#include <ctime> 

class RandomizedSet {
public:
    vector<int> mySet;

    RandomizedSet() {
        mySet={};
    }
    
    bool insert(int val) {
        for(int i =0;i<mySet.size();i++){
            if(val==mySet[i]){
                return false;
            }
        }
        mySet.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        for(int i =0;i<mySet.size();i++){
            if(mySet[i]==val){
                mySet.erase(mySet.begin()+i);
                return true;
            }
        }return false;
    }
    
    int getRandom() {
        return mySet[rand() % mySet.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

int main() {
    //Start Coding
    return 0;
}