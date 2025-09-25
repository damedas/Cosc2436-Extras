#include <iostream>
#include <vector>
#include <map> 
using namespace std; 


vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> numtable; 
    
    for (int i=0;i<nums.size();i++){
        numtable[nums[i]]=i; 
    }
    for (int i=0;i<nums.size();i++){
        int com= target- nums[i]; 
        if (numtable.count(com) && numtable[com]!=i){// com in numtable key and its index is not equal to the same position
            return {i, numtable[com]};
        }
    }
    return {}; 

    }