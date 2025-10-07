#include <iostream>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> memo(prices.size(), vector<int>(3, INT_MIN));
        return recurse(prices, 0, 0, memo);
    }

    int recurse(vector<int>& prices, int day, int state, vector<vector<int>>& memo) {
        // States
        // 0: ready to buy
        // 1: ready to sell
        // 2: cooldown
        if (day >= prices.size()) return 0;
        if (memo[day][state] != INT_MIN) return memo[day][state];

        if (state == 0) {
            int wait = recurse(prices, day + 1, 0, memo); // wait
            int buy = recurse(prices, day + 1, 1, memo) - prices[day]; // buy

            memo[day][state] = max(wait, buy);
            return memo[day][state];

        } else if (state == 1) {
            int wait = recurse(prices, day + 1, 1, memo);
            int sell = recurse(prices, day + 1, 2, memo) + prices[day];

            memo[day][state] = max(wait, sell);
            return memo[day][state];

        } else if (state == 2) {
            int cooldown = recurse(prices, day + 1, 0, memo);

            memo[day][state] = cooldown;
            return memo[day][state];
        }

        return INT_MIN;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> prices;

    // Test case 1
    prices = {1, 2, 3, 0, 2};

    // Test case 2
    // prices = {1};

    int answer = solution.maxProfit(prices);
    cout << answer << "\n";
}
