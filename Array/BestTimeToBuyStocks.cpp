#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int maxprofit=0;
        for(int p: prices){
            if(p < min_price)
            min_price=p;
            else
            maxprofit=max(maxprofit,p-min_price);

        }
        return maxprofit;
    }
};
