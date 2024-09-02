#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prev_price = prices[0];

        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            profit += max(0, prices[i] - prev_price); // accumulate all positive deltas
            prev_price = prices[i];
        }

        return profit;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> prices;

    // Test case 1
    prices = {7, 1, 5, 3, 6, 4};

    // Test case 2
    // prices = {1, 2, 3, 4, 5};

    // Test case 3
    // prices = {7, 6, 4, 3, 1};
 
    int answer = solution.maxProfit(prices);
    cout << answer << "\n";
}
