#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> memo = {};

        for (auto token: tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = memo.top();
                memo.pop();
                int a = memo.top();
                memo.pop();
                // cout << a << token << b << "\n";

                if (token == "+") {
                    memo.push(a + b);
                } else if (token == "-") {
                    memo.push(a - b);
                } else if (token == "*") {
                    memo.push(a * b);
                } else if (token == "/") {
                    memo.push(a / b);
                } else {
                    cout << "ERROR";
                }
            } else {
                // cout << token << "\n";
                memo.push(stoi(token));
            }
        }

        return memo.top();
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<string> tokens;

    // Test case 1 - Expected 9
    tokens = {"2", "1", "+", "3", "*"};

    // Test case 2 - Expected 6
    tokens = {"4", "13", "5", "/", "+"};

    // Test case 3 - Expected 22
    tokens = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};

    int answer = solution.evalRPN(tokens);
    cout << answer << "\n";
}
