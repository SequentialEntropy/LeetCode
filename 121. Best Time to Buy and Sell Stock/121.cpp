#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        
        for (int price: prices) {
            min_price = min(min_price, price);
            max_profit = max(max_profit, price - min_price);
        }

        return max_profit;
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
    // prices = {7, 6, 4, 3, 1};

    int answer = solution.maxProfit(prices);
    cout << answer << "\n";
}
