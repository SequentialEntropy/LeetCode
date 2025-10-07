#include <iostream>

using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> memo(amount + 1, -2);

        return recurse(coins, amount, memo);
    }

    int recurse(vector<int>& coins, int amount, vector<int>& memo) {
        if (amount < 0) return -1;
        if (amount == 0) return 0;
        if (memo[amount] != -2) return memo[amount];

        int min = INT_MAX;
        for (auto coin: coins) {
            int count = recurse(coins, amount - coin, memo);
            if (count < min && count >= 0) {
                min = count + 1;
            }
        }

        memo[amount] = (min == INT_MAX) ? -1 : min;
        return memo[amount];
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> coins;
    int amount;

    // Test case 1 - expected 3 coins (5 + 5 + 1)
    coins = {1, 2, 5};
    amount = 11;

    // Test case 2 - expected -1 (not possible)
    // coins = {2};
    // amount = 3;

    // Test case 3 - expected 0 coins
    // coins = {1};
    // amount = 0;

    // Custom case - expected 2 coins (3 + 3)
    // coins = {4, 3, 1};
    // amount = 6;

    int answer = solution.coinChange(coins, amount);
    cout << answer << "\n";
}
