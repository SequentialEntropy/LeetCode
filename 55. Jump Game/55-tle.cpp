#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        set<int> reachable_index; // memoisation
        queue<int> check_index;

        if (nums.size() == 1) {
            return true;
        }

        check_index.push(0);
        while (check_index.size() != 0) {
            int current_index = check_index.front();
            check_index.pop();

            if (reachable_index.find(current_index) != reachable_index.end()) {
                continue; // skip if already checked
            }

            reachable_index.insert(current_index); // memoise
            
            for (int index = current_index + 1; index <= current_index + nums[current_index]; index++) {
                if (index == nums.size() - 1) {
                    return true;
                }
                check_index.push(index);
            }
        }
        return false;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> nums;

    // Test case 1
    nums = {2, 3, 1, 1, 4};

    // Test case 2
    // nums = {3, 2, 1, 0, 4};

    bool answer = solution.canJump(nums);
    cout << answer << "\n";
}
