#include <iostream>
#include <vector> 
using namespace std;
int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int profit=0; 
        for (int i=1;i<prices.size();i++){
            if (buy>prices[i]){
                buy= prices[i];
            }
            else if (profit<prices[i]-buy){
                profit=prices[i]-buy;
            }
        }
        return profit; 
    }